#include <bits/stdc++.h>
using namespace std;

typedef long long lli;
typedef long li;

int main() {
    vector<int>seq = {4, 8, 15, 16, 23, 42};
    
	int n;
	cin>>n;
	
	int arr[n];
	for(int i = 0; i < n; i++){
	    cin>>arr[i];
	    
	    //find the position of  4,8,15,16,23,42 in the seq vector.
	    arr[i] = lower_bound(seq.begin(), seq.end(), arr[i]) - seq.begin();
	}
	
	//stores the count of subsequences [4], [4, 8], [4, 8, 15] and so on.
	int cnt[6] = {0};
	for(int i = 0; i < n; i++){
	    if(arr[i] == 0){
	        cnt[arr[i]]++; //just start a new subsequence with [4].
	    }
	    else{
	        if(cnt[arr[i]-1] > 0){
	            cnt[arr[i]-1]--; //this will reduce the count of exixting short subsequenc
	            cnt[arr[i]]++;   //this will increase the count of longer subsequence
	        }
	    }
	}
	cout<<n-cnt[5]*6<<"\n";
	return 0;
}
