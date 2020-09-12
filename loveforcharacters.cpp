# C_N_language_tools
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    string s;
    cin>>s;
    int a=0,b=0,c=0;
    
    for(int i=0;i<n;i++)
    {
        if(s[i]=='a')
        {
            a+=1;
        }
        else if(s[i]=='s')
        {
            b+=1;
        }
        else if(s[i]=='p')
        {
            c+=1;
        }
    }
    cout<<a<<" "<<b<<" "<<c;
}


