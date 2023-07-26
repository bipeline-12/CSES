//Wierd Algorithm 


#include <bits/stdc++.cpp>
using namespace std;

int solve(int n)
{
	
	int m = n;
	int count=1;
	while (m!=1){

		if(m%2 == 0){
	    m=m/2;
	    count++;
	    }
	    else{
	        m=(3*m+1);
	        count++;
	    }
	  }

	  return count;

}


int main(){
	int n;
	cin >> n ;
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cout<<solve(n);
	return 0;
}
