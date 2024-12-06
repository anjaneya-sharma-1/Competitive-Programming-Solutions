#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n;
    cin>>n;
    vector<int> v;
    int d= 0;
    int failed =0;
    vector<int> p;
    p.push_back(0); 
    for(int i =1;i <=n ; i++){
        ll curr;
        cin>>curr;
        if(d==1&&v[v.size()-1]!=curr){
            failed=1;
        }
        else if(!v.empty()&&v[v.size()-1]!=curr){
            p.push_back(i-1);
            d=1;
        }
        else{
            d=0;
            if(v.empty()){
                d=1;
            }
            
        }
        v.push_back(curr);
    }
    p.push_back(n);
    if(failed||n==1||d){
        cout<<-1<<endl;
        continue;
    }
    else{
        
        for(int j = 0; j<p.size()-1;j++){
            cout<<p[j+1]<<" ";
            for(int i = p[j]+1;i<p[j+1];i++){
                cout<<i<<" ";
            }
        cout<<endl;
        continue;
            }
    }
  }
}