#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	ll n;
	cin>>n;
	cout<<n<<" ";
	for(;n>1;){
		n=((n%2==0)?(n/2):(n*3+1));
		cout<<n<<" ";
		}
}
