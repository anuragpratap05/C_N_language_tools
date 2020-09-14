# C_N_language_tools
#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n;
    cin>>n;
    int N;
    N=(4*n)+1;
    string x[N];
    x[N-1]="0";
    string s;
    int b[n];
    string a[n];
    for(int i=0;i<4*n;i++)
    {
        cin>>s;
        x[i]=s;
    }
    int j=0;
    for(int i=0;i<4*n;i+=4)
    {
        a[j]=x[i];
        x[i]="0";
        j+=1;
    }
    /*for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;*/
    
    
    
    int k=0;
    int sum=0;
    for(int i=1;i<N;i++)
    {
        if( i%4==0 )
        {
            //cout<<i<<" "<<sum<<endl;
            b[k]=sum;
            k+=1;
            sum=0;
            //cout<<i<<" "<<sum<<endl;
            //continue;
        }
        else
        {
            int y=0;
            y=stoi(x[i]);
            sum=sum+y;
        }
        
    }
    
    /*for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }*/
    
    //cout<<endl;
  
     //map<int, string> marks; 
     multimap<int, string, greater <int> > marks;
     for(int i=0;i<n;i++)
     {
     marks.insert(pair<int, string>(b[i], a[i]));
     }
     
     int f=1;
     
      map<int, string>::iterator itr; 
      
     for (itr =  marks.begin(); itr !=  marks.end(); itr++) { 
        cout <<f<<" "<<itr->second<<endl;
        f+=1;
     }
     //cout<<endl;
  
    /*for(int i=0;i<N;i++)
    {
        cout<<x[i]<<" ";
    }*/
    
}
