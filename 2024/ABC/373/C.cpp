#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,val;
	cin>>n;
	int maxVal1=INT_MIN,maxVal2=INT_MIN;
	for(int i=0; i<n; i++){
		cin>>val;
		maxVal1 = max(maxVal1,val);
	}
	for(int i=0; i<n; i++){
		cin>>val;
		maxVal2 = max(maxVal2,val);
	}
	cout<<maxVal1 + maxVal2<<endl;
	return 0;
}