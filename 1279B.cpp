//problem link : https://codeforces.com/contest/1279/problem/B


#include <bits/stdc++.h>
using namespace std;

typedef long long lli;
typedef long li;

int main() {
	int t;
	cin>>t;
	while(t--){
	    li n, s;
	    cin>>n>>s;
	    
	    li arr[n];
	    for(int i = 0; i < n; i++){
	        cin>>arr[i];
	    }
	    li mx = 0, cnt = 0, sum = 0, i, max_i = 0;
	    for(i = 0; i < n; i++){
	        if(sum > s){
	            break;
	        }
	        sum += arr[i];
	        cnt++;
	        if(mx < arr[i]){
	            mx = arr[i];
	            max_i = i;
	        }
	    }
	    if(i == n && sum <= s){
	        cout<<0<<"\n";
	        continue;
	    }
	    cnt--;
	    sum -= mx;
	    while(i < n && sum < s){
	        if(sum + arr[i] > s){
	            break;
	        }
	        cnt++;
	        sum += arr[i];
	        i++;
	    }
	    cout<<max_i+1<<"\n";
	}
	return 0;
}
