# C_N_language_tools
#include<bits/stdc++.h>
using namespace std;

char getchar(int i)
{
    return (char)(i+97);
}
 
void palindrome(string s)
{
    int ans[s.length()];
    int start=0;
    int end=s.length()-1;
    map<char,vector<int> > m;
    for(int i=0;i<s.length();i++)
    {
        //cout<<s[i]<<endl;
    m[s[i]].push_back(i);
    }
    
    int odd=0;
    for(int i=0;i<26;i++)
    {
        if(m[getchar(i)].size()%2!=0)
        {
            odd+=1;
        }
    }
    if(odd>=2)
    {
        cout<<"-1";
        cout<<endl;
        return;
    }
    
    for(int i=0;i<26;i++)
    {
        for(int j=0;j<m[getchar(i)].size();j+=2)
        {
            if((m[getchar(i)].size()-j)==1)
            {
                ans[s.length()/2]=m[getchar(i)][j];
                continue;
            }
            ans[start]=m[getchar(i)][j];
            ans[end]=m[getchar(i)][j+1];
            start++;
            end--;
        }
    }
    for(int i=0;i<s.length();i++)
    {
        cout<<ans[i]+1<<" ";
    }
     cout<<endl;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      string s;
      cin>>s;
      palindrome(s);
  }
}
