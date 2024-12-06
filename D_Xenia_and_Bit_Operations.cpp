#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    int build(vector<ll>&t,vector<ll>&a,ll v,ll tl,ll tr){
        if(tl==tr){
            t[v]=a[tl];
            return 1;
        }
        else{
            ll tm=(tl+tr)/2;
            int tp =build(t,a,2*v,tl,tm);
            build(t,a,2*v+1,tm+1,tr);
            if(tp==-1){
                t[v]=t[v*2]^t[v*2+1];
                }
            else{
                t[v]=t[v*2]|t[v*2+1];
            }
            return (tp*-1);
        }
    }
    int update(vector<ll>&t,ll v,ll tl,ll tr,ll pos,ll newVal){
        if(tl==tr){
            t[v]=newVal;
            return 1;
        }
        else{
            ll tm=(tl+tr)/2;
            int tp;
            if(pos<=tm){
                tp =update(t,2*v,tl,tm,pos,newVal);

            }
            else{
            tp =update(t,2*v+1,tm+1,tr,pos,newVal);}
            if(tp==-1){
                t[v]=t[v*2]^t[v*2+1];
                //cout<<t[v]<<" "<<tl<<"-1"<<endl;
                }
            else{
                t[v]=t[v*2]|t[v*2+1];

                //cout<<t[v*2]<<" "<<t[v*2+1]<<"1"<<endl;
            }
            return (tp*-1);
        }
    }
void solve() {
    ll n ,m;
    cin>>n>>m;
    n=1<<n;
    vector<ll>a(n+1);
    for(int i =1;i<=n;i++){
        ll curr;
        cin>>curr;
        a[i]=curr;
    }
    vector<ll>t(4*n);
    build(t,a,1,1,n);
    for(int i=1;i<=m;i++){
        ll p,val;
        cin>>p>>val;
        update(t,1,1,n,p,val);
        cout<<t[1]<<endl;
    }

}

};
int main(){
    ll t=1;
    //cin >> t;
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}