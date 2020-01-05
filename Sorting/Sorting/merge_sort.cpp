// Program for implementation of merge sort in c++
// function msort() calls itself recurively while the function merge() merges two arrays


#include<iostream>
using namespace std;

void merge(int *a, int p,int q,int r){
    int left[q-p+2], right[r-q+1];
    left[q-p+1] = 99999, right[r-q] = 99999;
    for(int l = 0; l<=q-p; l++)
        left[l] = a[p+l];
    for(int k = 0; k<r-q; k++)
        right[k] = a[q+1+k];
    int l = 0, k = 0;
    for(int i = p; i<=r; i++){
        if(left[l]>right[k]){
            a[i] = right[k];
            k++;
        }
        else{
            a[i] = left[l];
            l++;
        }
    }
}
void msort(int *a, int p, int r){
    if(p<r){
        int q = (p+r)/2;
        msort(a,p,q);
        msort(a,q+1,r);
        merge(a,p,q,r);
    }
}

int main(){
    int a[] = {1,5,99,7,8};
    msort(a, 0, 4);
    for(int i = 0; i<5; i++) cout<<a[i]<<endl;
}