#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define float long double

void solution(){
    //write your code here
    int n;
    string s;
    cin>>n;
    cin>>s;
    int count = 0;
    for(int i=0; i<n-2; i++){
        if(s[i]=='#' && s[i+2]=='#' && s[i+1]=='.') count++;
    }
    cout<<count<<endl;
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
