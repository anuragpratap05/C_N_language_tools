# C_N_language_tools
#include<iostream>
using namespace std;
#include<vector>
#include<string>
int main()
{
    string s="anurag";
    string s1(s,2,4);
    cout<<s<<endl<<s1<<endl;
    //cout<<s1<<endl;
    string s2=s.substr(1,4);
    cout<<s2<<endl;
    if(s1.compare(s2)==0)
    {
        cout<<"equal"<<endl;
    }
    else
    {
        cout<<"Not equal"<<endl;
    }
}
