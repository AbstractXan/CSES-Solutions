#include<bits/stdc++.h>
#include<cstring>
typedef long long ll;
using namespace std;
int main(){
	ll n,currmax,max;
	string s;
	cin>>s;
	n = s.size();
	currmax=1; max=0;
	for(n=n-1;n>0;n--){ 
		if(s[n]==s[n-1])
			{currmax++;
			if(currmax>max){max=currmax;}}
		else
			if(currmax>max){max=currmax; currmax=1;}
		}
	cout<<max;
}
