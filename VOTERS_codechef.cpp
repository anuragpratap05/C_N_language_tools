# C_N_language_tools
 #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n1,n2,n3,c=0;
    cin>>n1>>n2>>n3;
    ll n=n1+n2+n3;
    ll a[n];
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        //ll x;
        cin>>a[i];
    }
    sort(a,a+n);
    for (int i = 0; i < n; i++) 
        m[a[i]]++;
        
    for (auto x : m) 
    if(x.second>=2)  c++;
    cout<<c<<endl;
    for (auto x : m) 
    if(x.second>=2)  cout<<x.first<<" ";
    //cout<<c;
}
