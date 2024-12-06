#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Solution{
    public:
    int count=0;
    int hlpr(int i,int j,int x, int y , int z, vector<int> v){
        if(j==v.size()){
            return 0;
        }
        
    }


}

int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n;
    cin>>n;
    vector<int> v;
    
    for(int i =0;i<n;i++){
        ll curr;
        cin>>curr;
        v.push_back(curr);
    }
    Solution sol;
    sol.hlpr(0,1,0,0,0,v);
    cout<<sol.count<<endl;
  }
  return 0;
}