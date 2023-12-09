#include <iostream>
#include <string>
using namespace std;
 
int main(){
	string a,b;
	cin>>a;cin>>b;
	int v(0);
	for(int i=0;i<a.size();i++){
		int x(a[i]),y(b[i]);
		if(x<97){x+=32;}
		if(y<97){y+=32;}
		if(x!=y){
			if(x>y){v+=1;}
			if(x<y){v+=-1;}
			break;
		}
	}
	cout<<v;
}
