#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	ll i,j,n;
	cin>>n;
	i=n; //i starts from end 
	j=(n%2==0)?1:2; //j starts from 1 or 2 w.r.t n
	if(n<4){ cout<<"NO SOLUTION"; return 0;}
	while(i>0) //number of i >= number of j
	{
		cout<<i<<" ";
		if(j<=n) cout<<j<<" "; //print j
		i-=2; j+=2;
	}
	
}

/*Example:
For n=5 Evens: 2 4 Odds: 1 3 5
beautiful: 1 4 3 2 5
*/ 
