#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	int count = 0;
	for(int i=1; i<13; i++){
		cin>>str;
		if(str.size()==i) count++;
	}
	cout<<count<<endl;
	return 0;
}