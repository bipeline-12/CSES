//Wierd Algorithm 


#include <bits/stdc++.cpp>
using namespace std;

int solve(int n)
{
	
	ll n;
	cin>>n;
	ll count=1;
	while (n>1){

		printf("%lld ",n);

		if(n%2 == 0){
	    	n=n/2;
	    	count++;
	    }
	    else{
	        n=(3*n+1);
	        count++;
	    }
	    
	}
	printf("1\n");

}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
