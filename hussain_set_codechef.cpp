# C_N_language_tools
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m;
    cin>>n>>m;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    queue<ll> q;
    ll count_m=0;
    ll end_p=n-1;
    ll ans;
    while(m--)
    {
        ll curr_m;
        cin>>curr_m;
        for(;count_m<curr_m;count_m++)
        {
            if(end_p>=0 && (q.empty()|| a[end_p]>=q.front()))
            {
                ans=a[end_p];
                end_p--;
            }
            else
            {
                ans=q.front();
                q.pop();
            }
            q.push(ans/2);
        }
        cout<<ans<<endl;
    }
    
    
}
