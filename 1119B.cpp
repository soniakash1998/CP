#include <bits/stdc++.h>
using namespace std;

typedef long long lli;
typedef long li;

int main() {
	
	lli n, h;
	cin>>n>>h;
	
	li arr[n], ans = 0;
	for(int i = 0; i < n; i++){
	    cin>>arr[i];
	}
	for(int k = 1; k <= n; k++){
	    sort(arr, arr+k);
	    reverse(arr, arr+k);
	    lli sum = 0, i;
	    for(i = 0; i < k; i+=2){
	        //cout<<arr[i]<<"\t";
	        sum += arr[i];
	    }
	    if(sum <= h){
	        ans = k;
	    }
	   // cout<<sum<<"\n";
	}
	std::cout << ans << std::endl;
	return 0;
}
