#include<iostream>
#include<string>
using namespace std;
 
int main(){
	ios::sync_with_stdio(false);
	int n,t(0);cin>>n;
	for(int i=0;i<n;i++){
		string s;cin>>s;
		if(s[0]=='+'||s[2]=='+'){t++;}
		if(s[0]=='-'||s[2]=='-'){t--;}
	}
	cout<<t<<endl;
}
