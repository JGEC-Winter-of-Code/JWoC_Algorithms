#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b; // Two numbers input
    cout<<"Before swapping a is "<<a<<endl;
    cout<<"Before swapping b is "<<b<<endl;
    a=a^b;  //a becomes a^b
    b=a^b; //b becomes a^b
    a=a^b;//a becomes a^b
    cout<<"After swapping a is "<<a<<endl;
    cout<<"After swapping b is "<<b<<endl;
    return 0;
}
