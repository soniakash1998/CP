#include <bits/stdc++.h>
using namespace std;

typedef long long lli;
typedef long li;

int main() {
	int n;
	cin>>n;
	
	li arr[n];
	for(int i = 0; i < n; i++){
	    cin>>arr[i];
	}
	
	li k = *min_element(arr, arr+n);
	
	for(int i = 0; i < n-1; i++){
	    k = min(k, min(arr[i], arr[n-1])/(n-i-1));
	}
	
	for(int i = 1; i < n; i++){
	    k = min(k, min(arr[i], arr[0])/i);
	}
	
	cout<<k<<"\n";
	return 0;
}
