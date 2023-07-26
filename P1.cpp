//Wierd Algorithm 


#include <bits/stdc++.cpp>
using namespace std;

int solve(int n)
{
	
	int n;
	cin>>n;
	int m = n;
	int count=1;
	int i=0;
	vector<int> seq;
	seq.push_back(n);
	while (m!=1){

		if(m%2 == 0){
	    m=m/2;
	    count++;
	    }
	    else{
	        m=(3*m+1);
	        count++;
	    }
	    seq.push_back(m);
	  }

	  seq.push_back(1);

	  while(i<count){
	  	cout << seq[i] <<" ";
	  	i++;
	  }

}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	solve();
	return 0;
}
