#include <bits/stdc++.h>
using namespace std;

typedef long long lli;
typedef long li;

int main() {
	li n, m, a, b, c;
	cin>>n>>m;
	
	long arr[n+1] ={0};
	for(int i = 0; i < m; i++){
	    cin>>a>>b>>c;
	    arr[a] += c;
	    arr[b] -= c;
	}
	
	li ans = 0;
	for(int i = 1; i <= n; i++){
	    if(arr[i] > 0){
	        ans += arr[i];
	    }
	}
	cout<<ans<<"\n";
	return 0;
}

// consider it like if you owe to someone you gives money to an org. and if someone owes you then he gives money to you.
