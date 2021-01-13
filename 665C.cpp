#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	 while(t--){
	     int n;
	     cin>>n;
	     long arr[n], arr1[n], mn = 1e9+10;
	     for(int i = 0; i < n; i++){
	         cin>>arr[i];
	         arr1[i] = arr[i];
	         mn = min(mn, arr[i]);
	     }
	     sort(arr1, arr1+n);
	     bool check = false;
	     for(int i = 0; i < n; i++){
	         if(arr[i] != arr1[i] && arr[i]%mn != 0){
	             check = true;
	         }
	     }
	     if(check){
	         cout<<"NO"<<"\n";
	     }
	     else{
	         cout<<"YES"<<"\n";
	     }
	 }
	return 0;
}


// we need to check that after sorting if any of the unmatched element is not having minimum as its factor. 
//If it is so then we can not sort the array othersie it is always possible to sort the array.
