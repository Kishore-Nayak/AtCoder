#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	cin>>str;
	int count = 0;
	unordered_map<char,int> m;
	for(int i=0; i<str.size(); i++) m[str[i]] = i;
	for(char i='A'; i<'Z'; i++){
		count += abs(m[i]-m[i+1]);
	}
	cout<<count<<endl;
	return 0;
}