#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    static bool comp(pair<ll,ll>&a,pair<ll,ll>&b){
        if(a.first==b.first){
            return a.second>b.second;
        }
        return a.first<b.first;
    }
void solve() {
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll frst=-1;
    ll last=-1;
    ll ans=0;
    ll num=0;
    for(int i=0;i<n;i++){
        if(s[i]=='W'&&frst==-1){
            frst=i;
            
        }
        if(s[i]=='W'){
            last=i;
            ans+=1+(i>0&&s[i-1]=='W');
        }
        if(s[i]=='L'){
            num++;
        }
    }
    k=min(k,num);
    if(k==0){
        cout<<ans<<endl;
        return;
    }
    
    
    if(frst==-1){
        cout<<max(0LL,2*k-1)<<endl;
        return;
    }
   
    
    ll count=0;
    vector<pair<ll,ll>>v;
  
    for(int i=frst;i<=last;i++){
        if(s[i]=='L'){
            count++;
        }
        else if(count>0){
           
            v.push_back({count,count*2+1});
             
            count=0;
        }
    }
   

    sort(v.begin(),v.end(),comp);
    for(auto x:v){
        if(k>=x.first){
            k-=x.first;
            ans+=x.second;
        }
        else{
            ans+=2*k;
            k=0;
        }
        if(k==0){
            break;
        }
    }
    if(k>0){
       if(k<=last-frst+1){
           ans+=2*k;
           k=0;
       }
       else{
           ans+=2*(last-frst+1);
           k-=last-frst+1;

       }
       ans+=max(0LL,2*k);

    }
    
    cout<<ans<<endl;
    

    
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