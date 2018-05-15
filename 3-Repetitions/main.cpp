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
	for(n=n-1;n>0;n--){ 		//Traverse from n-1(last) to 1(second)
		if(s[n]==s[n-1])	//If current==next
			{currmax++;	//Increment current max
			if(currmax>max){max=currmax;}} //Check and update max
		else
			if(currmax>max){max=currmax; currmax=1;} //If not equal, check and update max, reset current max
		}
	cout<<max;
}
