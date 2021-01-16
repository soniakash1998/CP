#include <bits/stdc++.h>
using namespace std;

typedef long long lli;
typedef long li;

int main() {
    int n, m, k;
    cin>>n>>m>>k;
    
    vector<pair<li, li>>arr[n+1];
    li u, v, l;
    
    for(int i = 0; i < m; i++){
        cin>>u>>v>>l;
        // cout<<u<<" "<<v<<" "<<l<<"\n";
        arr[u].push_back({l,v});
        arr[v].push_back({l,u});
    }
    vector<int>rst(k);
    set<int>st;
    for(int i = 0; i < k; i++){
        cin>>rst[i];
        st.insert(rst[i]);
    }
    if(k == 0 ||  k == n){
        cout<<-1<<"\n";
        return 0;
    }
    
    for(int i = 1; i <= n; i++){
        if(arr[i].size() > 0)
        sort(arr[i].begin(), arr[i].end());
    }
    vector<li>dist;
    for(int i = 0; i < k; i++){
        int temp = rst[i];
        for(int j = 0; j < arr[temp].size(); j++){
            if(st.find(arr[temp][j].second) == st.end()){
                dist.push_back(arr[temp][j].first);
                break;
            }
        }
    }
    if(dist.size() == 0){
        cout<<-1<<"\n";
        return 0;
    }
    cout<<*min_element(dist.begin(), dist.end())<<"\n";
	return 0;
}
