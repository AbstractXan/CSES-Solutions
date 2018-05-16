#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool apart(ll *des, ll *siz, ll i, ll j, ll k)
{
	if(siz[j]<=(des[i]+k)&&siz[j]>=(des[i]-k))
		return true;
	else
		return false;
}

int main(){
	ll n,m,k,i,j;
	cin>>n>>m>>k;	
	ll des[n]; des[0]=0;//desired size	
	ll siz[m]; siz[0]=0;//size of app
	ll num=0;
	
	for(ll i=1;i<=n;i++){cin>>des[i];}//1 indexing
	for(ll i=1;i<=m;i++){cin>>siz[i];}//1 indexing
	sort(des,des+n+1); 
	sort(siz,siz+m+1);
	
	i=1; //Set i=1 initially
	for(ll j=1;j<=m;j++){		//Iterate for size 
		for(;i<=m;i++){		//Iterate for desired keeps checking next
			if(apart(des,siz,i,j,k)==true){
				num++;			//Accept if in range
				i++;			//Increment deired
				break;
				}
			else{
				if(siz[j]<des[i]-k)	//If size not reachable	
					break;
				else
					continue;		//Increment desired					
			}
		}
	}

	cout<<num;	
}

