#include <bits/stdc++.h>
using namespace std;

typedef long long lli;
typedef long li;

lli power(lli a, lli b, lli m){
    lli res = 1;
    while(b > 0){
        if(b%2 == 1){
            res = (res*a)%m;
        }
        a = (a*a)%m;
        b = b/2;
    }
    return res%998244353;
}

int main() {
	lli w, h;
	cin>>w>>h;
	
	//there is four ways for placing 1 tile and after that for the rest of 
	//the first row i.e. w-1 tiles have 2 ways to be laced.
	//same goes for h-1 tiles of the first columns. 
	//Rest of the tiles have only one way for placing them.
	//hence 4*2^(w-1)*2^(h-1) ways combinations.
	
	cout<<power(2ll, w+h, 998244353)<<"\n";
	return 0;
}
