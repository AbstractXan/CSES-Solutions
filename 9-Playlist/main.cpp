#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n,temp,count=0;
	cin>>n;
	ll index[n];
	for(ll i=0;i<n;i++){index[i]=0;}
	for(ll i=0;i<n;i++){
	cin>>temp;
	if(index[temp]==0){count++; index[temp]++;}}
	cout<<count;	
}
