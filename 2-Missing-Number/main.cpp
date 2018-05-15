#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	ll n,sum,num;
	cin>>n;
	sum=n*(n+1)/2;		//Sum of natrunal numbers till n
	for (int i=1; i<n; ++i)
	{ cin>>num; sum-=num;}	//Subtract input numbers from sum
	cout<<sum;		//Output will be what remains of sum
}
