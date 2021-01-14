#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin>>n;
	
	long long arr[n], mx = 0, sum = 0;
	for(int i = 0; i < n; i++){
	    cin>>arr[i];
	    mx = max(mx, arr[i]);
	    sum += arr[i];
	}
	long long gcd = mx - arr[0];
	for(int i = 1; i < n; i++){
	    gcd = __gcd(gcd, mx-arr[i]);
	}
	long long y = (mx*n - sum)/gcd;
	cout<<y<<" "<<gcd<<"\n";
	return 0;
}


//Here the requirement is to find z such that for each i, arr[i] + z*k[i] = max(arr). so k[i] = (mx - arr[i])/z => k[i]*z = mx - arr[i].
//find gcd(k[i]*z) which is equivalent of finding gcd(mx - arr[i]). this is ooptimal value of z.
