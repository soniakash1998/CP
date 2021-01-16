#include <bits/stdc++.h>
using namespace std;

typedef long long lli;
typedef long li;

int main() {
	int n;
	string s;
	cin>>n>>s;
	
	
	int sum = 0;
	for(int i = 0; i < n-1; i++){
	    sum += (s[i] - '0'); //First segment sum
	    
	    int pos = i+1;
	    bool check = true;
	    int sum2 = 0;
	    
	    //Iterate over the next segments and finds if they are equal to first segment sum
	    while(pos < n){
	        sum2 = s[pos++] - '0';
	        while(pos < n && sum2 + s[pos] - '0' <= sum){
	            sum2 += s[pos] - '0';
	            pos++;
	        }
	        if(sum2 != sum) check = false;
	    }
	    if(sum2 != sum) check = false;
	    if(check){
	        cout<<"YES"<<"\n";
	        return 0;
	    }
	}
	cout<<"NO"<<"\n";
	return 0;
}

