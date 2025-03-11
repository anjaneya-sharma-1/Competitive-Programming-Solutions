#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000000000000000LL
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n;
    cin>>n;
    vector<ll>a(2*n);
    set<ll>st;
    for(ll i=0;i<2*n;i++){
        cin>>a[i];
        st.insert(a[i]);
    }
    sort(a.begin(),a.end());

 
    vector<ll>even(a.begin()+n,a.end());
    vector<ll> odd(a.begin(), a.begin() + n);
    ll sume=0;
    ll sumo=0;
    for(auto x:even){
        sume+=x;
    }
    for(auto x:odd){
        sumo+=x;
    }
    ll temp=sume-sumo;
    bool check=(temp<=N&&temp>0&&st.find(temp)==st.end());

    if(!check){
        for(ll i=0;i<n;i++){
            ll tempn=temp-2*(even[i]-odd[n-1-i]);
            if(tempn<=N&&tempn>0&&st.find(tempn)==st.end()){
                swap(even[i],odd[n-1-i]);
                temp=tempn;
                check=true;
                break;
            }
        }
    }



    if(check){
        cout<<temp<<" ";
        for(int i=0;i<n;i++){
            cout<<even[i]<<" ";
            cout<<odd[i]<<" ";
        }
        cout<<endl;
        return;
    }
    
    ll a1=a.back();
    vector<ll>b(a.begin(),a.end()-1);
    ll sum=accumulate(b.begin(),b.end(),0LL);
    ll temp1=0;
    vector<ll>evenn;
    vector<ll>oddn;
    ll sz=b.size();
    vector<ll>vo(b.begin()+(sz-n),b.end());
    ll o=0;
    for(auto x:vo)o+=x;
    temp1=a1+2*o-sum;   
    if(temp1<=N&&temp1>0&&st.find(temp1)==st.end()&&temp1!=a1){
        evenn=vector<ll>(b.begin(),b.begin()+(sz-n));
        evenn.push_back(temp1);
        oddn=vo;
        check=true;
    }
    else{
        vo=vector<ll>(b.begin(),b.begin()+n);
        o=0;
        for(auto x:vo)o+=x;
        temp1=a1+2*o-sum;
        if(temp1<=N&&temp1>0&&st.find(temp1)==st.end()&&temp1!=a1){
            evenn=vector<ll>(b.begin()+n,b.end());
            evenn.push_back(temp1);
           
            oddn=vo;
            
            check=true;
        }


    }

    if(check){
        cout<<a1<<" ";
        for(int i=0;i<n;i++){
            cout<<evenn[i]<<" ";
            cout<<oddn[i]<<" ";
        }
        cout<<endl;
        return;
    }
    else{
        vector<ll>ans;
        ans.push_back(temp);
        cout<<temp<<" ";
        for(int i=0;i<n;i++){
            cout<<(even[i])<<" ";
            cout<<(odd[i])<<" ";
        }
        cout<<endl;
        return;


    }
    







    

    
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    cin >> t;
    
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}