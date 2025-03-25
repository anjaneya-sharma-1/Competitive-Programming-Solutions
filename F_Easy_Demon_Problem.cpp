#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 400005
#define MOD 1000000007
bool apos[N], aneg[N], bpos[N], bneg[N], posspos[N], possneg[N];
void solve(){
    ll n,m,q;
    cin>>n>>m>>q;
    vector<ll>L(n);

    ll tot1=0;
    for(ll i=0;i<n;i++){
        cin>>L[i];
        tot1+=L[i];
        
    }
    for(ll i=0;i<n;i++){
        if(abs(tot1-L[i]) < N) {
            if(tot1-L[i]<0) aneg[L[i]-tot1]=true;   
            else apos[tot1-L[i]]=true;
        } 
    }
    ll sum=0;
    vector<ll>A(m);
  
    ll tot2=0;
    for(ll i=0;i<m;i++){
        cin>>A[i];
        tot2+=A[i];
        sum+=A[i]*tot1;
    }
    for(ll i=0;i<m;i++){
        if(abs(tot2-A[i]) < N) {
            if(tot2-A[i]<0) bneg[A[i]-tot2]=true;   
            else bpos[tot2-A[i]]=true;
        } 
    }
    for(ll i=1;i<N;i++) {
        for(ll j=1;j<N;j++) {
            if(i * j > N) break;
            if(apos[i]&&bpos[j]) posspos[i*j]=true;
            if(apos[i]&&bneg[j]) possneg[i*j]=true;
            if(aneg[i]&&bpos[j]) possneg[i*j]=true;
            if(aneg[i]&&bneg[j]) posspos[i*j]=true;
        }
    }
    for(ll i=0;i<q;i++){
        ll k;
        cin>>k;
        
        if(k>0) {
            if(posspos[k]) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            if(possneg[-k]) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t=1;
    //cin >> t;
    while (t--) solve();
}