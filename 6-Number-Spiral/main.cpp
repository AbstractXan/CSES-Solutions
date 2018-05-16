#include<bits/stdc++.h>
#define DIAG(n) (1+(n)*(n-1))	//We find diagonal element of max of x and y
#define DIFF(a,b) (a-b)			//Difference b/w two numbers
using namespace std;
typedef long long ll;
int main(){
	ll x,y,diff,n;
	cin>>n;
	for(;n>0;n--){
	cin>>x>>y;
	if(x>y){cout<< (DIAG(x)+DIFF(x,y));}
	else if(y>x){ cout<< (DIAG(y)+DIFF(y,x));}
	else{cout<< DIAG(x);}
	cout<<endl;
	}
}	//Code could be further modified to spit out answers together
