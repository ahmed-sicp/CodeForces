#include<iostream>
#include<cmath>
using namespace std;
 
int main(){
	ios::sync_with_stdio(false);
	int m[5][5];int l(0),w(0);
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>m[i][j];
			if(m[i][j]==1){l+=i;w+=j;}
		}
	}
	if(l!=0||w!=0){cout<<abs(l-2)+abs(w-2)<<endl;}
	else{cout<<0<<endl;}
}
