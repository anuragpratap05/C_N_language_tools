#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int>v;
    for(int i=0;i<5;i++)
    {
        v.push_back(i+1);
    }
    for(int x=0;x<v.size();x++)
    {
        cout<<v[x]<<endl;
    }
}
