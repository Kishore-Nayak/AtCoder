#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define float long double

void solution(){
	//write your code here
	string str;
	cin>>str;
	int n = str.length();
	string s = str.substr(n-3);
	if(s=="san") cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}

int32_t main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	//for calculating run time
	clock_t z = clock();
	
	//no of testcases
	int t = 1;
	// cin>>t;
	
	//initiating loop for every test case
	while(t--) solution();
	
	cerr<<"Run Time : "<<((double)(clock()-z)*1000/CLOCKS_PER_SEC)<<" ms";

	return 0;
}
