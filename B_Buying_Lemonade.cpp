#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n,k;
    cin>>n>>k;
    ll rn=k-n;
    ll count=n;
    ll times = 0;
    priority_queue<int,vector<int>,greater<>> pq;
    for(int i=0;i<n;i++){
        ll curr;
        cin>>curr;
        curr-=1;
        pq.push(curr);
    }
    if(n>=k){
        cout<<k<<endl;
    }
    else if(k>n){

        while(rn>0&&!pq.empty()){
            auto p = pq.top()-times;
            pq.pop();
            if(p==0){
                count++;
            }
            else{
                ll q= p*(pq.size()+1);
                if(q>=rn){
                    count+=rn;
                    times+=rn;
                    break;
                }
                else {
                    times+=p;
                    count+=q+1;
                    rn-=q;
                }
            }
        }
        cout<<count<<endl;
    }


  }
  return 0;
}