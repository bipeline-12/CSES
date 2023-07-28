//Repetitions


#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){

	string s;
	cin >>s;
	int c=0, ans=1;
	char l='A';
	for (char  d:s){
		if(d==l){
			++c;
			ans=max(ans,c);
		}
		else{
			l=d;
			c=1;

		}
	}

	cout<< ans;

}
