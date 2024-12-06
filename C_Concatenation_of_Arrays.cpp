#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n;
    cin>>n;
    pair<int , int> maxi;
    pair<int,int> mini;
    vector<pair<int,int>> v;
    vector<int> result;
    priority_queue<vector<int>,vector<vector<int>>,greater<>> l;
 
    for(int i = 0 ; i<n;i++){
        pair<int,int> p;
        cin>>p.first>>p.second;
        v.push_back({p.first,p.second});
        l.push({p.first+p.second,min(p.second,p.first),max(p.second,p.first),i});
    }
    int i =0;
    int j  = n-1;
    if(n==1){
        cout<<v[l.top()[3]].first<<" "<<v[l.top()[3]].second<<endl;
    }
    else{
        ll i =0;
        
        while(!l.empty()){
            auto p = l.top();
            cout<<v[p[3]].first<<" "<<v[p[3]].second<<" ";
            l.pop();
            }
        
        cout<<endl;

    }

    

  }
  return 0;
}