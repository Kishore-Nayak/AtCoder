#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define float long double

void solution(){
	//write your code here
	string s,t;
	cin>>s>>t;
	int m = s.length();
	int n = t.length();
	if(s==t) cout<<0<<endl;
	else if(m==n){
		for(int i=0; i<m; i++){
			if(s[i]==t[i]) continue;
			else{
				cout<<i+1<<endl;
				break;
			}
		}
	}
	else{
		bool flag = true;
		for(int i=0; i<min(m,n); i++){
			if(s[i]==t[i]) continue;
			else{
				cout<<i+1<<endl;
				flag = false;
				break;
			}
		}
		if(flag){
			if(m<n) cout<<m+1<<endl;
			else cout<<n+1<<endl;
		}
	}
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
