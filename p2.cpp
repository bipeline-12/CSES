//Missing Number

int main(){
#include <bits/stdc++.h>
#define ll long long 
#define pb push_back
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	for (int i=0; i<n-1; i++)
	{
		cin >> arr[i];
	}
  	sort(arr, arr +n);
  	for (int i=0; i<n; i++)
  	{
  		if((i+1)!=arr[i]) 
  			cout << i+1;  	}


  	return 0;
}
