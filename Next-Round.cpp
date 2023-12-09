#include<iostream>
using namespace std;
 
int main(){
	ios::sync_with_stdio(false);
	int n,k,s(0);cin>>n>>k;int a[n];
	for(int i=1;i<=n;i++){cin>>a[i];}
	for(int i=1;i<=n;i++){if(a[i]>=a[k]&&a[i]>0){s++;}}
	cout<<s<<endl;
}
