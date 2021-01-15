#include <bits/stdc++.h>
using namespace std;

typedef long long lli;
typedef long li;

int main() {
    int n;
    cin>>n;
    
    map<li, li>mp;
    li a, b;
    for(int i = 0; i < n; i++){
        cin>>a>>b;
        mp[a]++;
        mp[b]--;
    }
    map<li, li>::iterator it = mp.begin(), it1;
    it++;
    for(; it != mp.end(); it++){
        it1 = it;
        it1--;
        mp[it->first] += mp[it1->first];
    }
    li yr, ppl = INT_MIN;
    for(auto i : mp){
        if(ppl < i.second){
            yr = i.first;
            ppl = i.second;
        }
    }
    cout<<yr<<" "<<ppl;
	return 0;
}


//This is like building histogram of the frequency and then finding the start of the peak of the histogram. Use a map and increment one for each birth year and decrement 1 for each death year. Do the cumulative addition of the years and find maximum value pair.
