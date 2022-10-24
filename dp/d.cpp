#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            b.push_back(x);
        }
	    map<int,int>m;
        for(int i=0;i<n;i++)
           m.insert({a[i],b[i]});
        int max_g=*max_element(a.begin(),a.end());
        int max_w=*max_element(b.begin(),b.end()); 
        int c=0;
        map<int,int> :: iterator it;
        for(auto it=m.begin();it!=m.end();++it)
        {
           if((*it).first==max_g||(*it).second==max_w)
           c++;
        }
        cout<<c<<endl;;
    }
	return 0;
}
