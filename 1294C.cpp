#include <bits/stdc++.h>
using namespace std;

typedef long long lli;
typedef long li;

int main() {
	int t;
	cin>>t;
	while(t--){
	    li n;
	    cin>>n;
	    set<li>arr;
	    
	    for(int i = 2; i * i <= n; i++){
	        if(n%i == 0){
	            arr.insert(i);
	            n = n/i;
	            break;
	        }
	    }
	    for(int i = 2; i * i <= n; i++){
	        if(n%i == 0 && !arr.count(i)){
	            arr.insert(i);
	            n = n/i;
	            break;
	        }
	    }
	   
	    if(arr.size() < 2 || arr.count(n) || n == 1){
	        cout<<"NO \n";
	    }
	    else{
	        cout<<"YES \n";
	        arr.insert(n);
	        for(auto it : arr){
	            cout<<it<<" ";
	        }
	        cout<<"\n";
	    }
	}
	
	return 0;
}
