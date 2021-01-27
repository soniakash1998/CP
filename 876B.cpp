#include <bits/stdc++.h>
using namespace std;

typedef long long lli;
typedef long li;

int main() {
	li n, k, m;
	
	//this will store the elements corresponding to arr[i]%m
	//arr[i]%m wiil work as key and corresponding to that key arr[i] will be stored
	
	map<li, vector<int>>hash; 
	cin>>n>>k>>m;
	
	li arr[n];
	for(int i = 0; i < n; i++){
	    cin>>arr[i];
	    hash[arr[i]%m].push_back(arr[i]);
	}
	
	bool flag = 0;
	for(auto it : hash){
	    if(it.second.size() >= k){
	        flag = 1;
	        cout<<"Yes\n";
	        int cnt = 0;
	        for(auto i : it.second){
	            cout<<i<<" ";
	            cnt++;
	            if(cnt == k) break;
	        }
	    }
	    if(flag){
	        break;
	    }
	}
	
	if(!flag){
	    cout<<"No\n";
	}
	return 0;
}
