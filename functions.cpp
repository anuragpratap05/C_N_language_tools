# C_N_language_tools
#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<utility>
#include<set>
#include<algorithm>
#include<unordered_map>
#include<cmath>


int main()
{
    int arr[] = {1,3,2,5,7,6};
	sort(arr,arr+6);
	for(int i=0;i<6;i++){
		cout<<arr[i] << " ";
	}
	cout<<endl;
	cout<<binary_search(arr,arr+6,9);//tells element is in arr or not.
	cout<<endl;
	cout<<lower_bound(arr,arr+6,3)-arr;
	cout<<endl;
	
	
	cout<<__gcd(10,6)<<endl;

	cout<<pow(2.2,5)<<endl;

}
