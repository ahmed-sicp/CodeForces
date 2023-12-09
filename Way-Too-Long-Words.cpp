#include<iostream>
#include<cmath>
using namespace std;
 
int main(){
	float n,m,a; cin>>n>>m>>a;
	if(n!=m){cout<<ceil(n/a)+ceil(m/a);}
	else{cout<<ceil(n/a);}
}

