#include<bits/stdc++.h>
#define SQ(a) ((a)*(a))
using namespace std;
typedef long long ll;
int main(){
	ll n,i;
	cin>>n;
	for(i=1;i<=n;i++){
			//n*n-1/2 ways to keep identical knights - [ Number of additional arrangements added after every new row and column ]
			//After each n->n+1 we get 8 more arrangements possible than last time.
			cout<<((SQ(i)*(SQ(i)-1)/2)-(8*(i-2)*(i-1)/2))<<endl;
		}
}

/*Explanation: Total ways to place(TW) = n^2 *(n^2-1)/2
nxn		|		Ways to place(W)		|		Ways to not place(NP) = TW - W0
n=1		|					0							|							0
n=2		|					0							|				6-0	=	6		
n=3		|					8							|				36-8=	28
n=4		|				8+16						|		120-8-16=	96
n=5		|			8+16+24						|		300- W  = 252

Thus we generalize NP w.r.t n as (n^2 * (n^2-1)/2 ) - 8*( (n-2)*(n-1)/2 )
*/
