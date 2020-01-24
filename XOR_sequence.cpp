#include <bits/stdc++.h> 
using namespace std; 
int msb(int x) 
{ 
    int ret = 0; 
    while ((x >> (ret + 1)) != 0) 
        ret++; 
    return ret; 
}
int xorRange(int l, int r) 
{ 
    int max_bit = msb(r); 
    int mul = 2; 
    int ans = 0; 
    for (int i = 1; i <= max_bit; i++) { 
  
        if ((l / mul) * mul == (r / mul) * mul) { 
            if (((l & (1 << i)) != 0) && (r - l + 1) % 2 == 1) 
                ans += mul; 
            mul *= 2; 
            continue; 
        }
        bool odd_c = 0; 
  
        if (((l & (1 << i)) != 0) && l % 2 == 1) 
            odd_c = (odd_c ^ 1); 
        if (((r & (1 << i)) != 0) && r % 2 == 0) 
            odd_c = (odd_c ^ 1); 
        if (odd_c) 
            ans += mul; 
        mul *= 2; 
    }
    int zero_bit_cnt = zero_bit_cnt = (r - l + 1) / 2; 
  
    if (l % 2 == 1 && r % 2 == 1) 
        zero_bit_cnt++; 
  
    if (zero_bit_cnt % 2 == 1) 
        ans++; 
  
    return ans; 
} 
int main() 
{ 
    int l,r;
    cin>>l>>r;
    cout << xorRange(l, r); 
  
    return 0; 
}
