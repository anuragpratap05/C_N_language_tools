# C_N_language_tools
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int c=0;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    
    sort(a,a+n);
    sort(b,b+n);
    
    
     for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
        
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
        
    }
    
    cout<<endl;
    int j=0;
    for(int i=0;i<n;i++)
    {
        
        //int x=b[j];
        if(a[i]>=b[j])
        {
            //cout<<a[i]<<">"<<b[j]<<" "<<"j="<<j<<endl;
            
            c+=1;
            j+=1;
        }
    }
    cout<<n-c;
    
}
