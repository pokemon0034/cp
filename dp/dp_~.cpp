#include<bits/stdc++.h>
using namespace std;
#define ll long long int   
ll FunctionEntered=0;
ll f(ll a)
{
    FunctionEntered++;
    if(a==1||a==2)
    return 1;
    return f(a-1)+f(a-2);
}
int main()
{
    ll n;
    cin>>n;
    cout<<f(n)<<endl;
    cout<<FunctionEntered<<endl;
    return 0;
}
