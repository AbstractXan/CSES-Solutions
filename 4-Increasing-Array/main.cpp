#include<bits/stdc++.h>
#include<cstring>
typedef long long ll;
using namespace std;
int main(){
	ll n,diff;
	ll turns=0; ll max=0;
	cin>>n;
	ll x[n];
	for(int i=0;i<n;i++)
	{
		cin>>x[i];
		if(x[i]>max){diff=0;max=x[i];}else{diff=max-x[i];};
		turns+=diff;
	}
	cout<<turns;
}




