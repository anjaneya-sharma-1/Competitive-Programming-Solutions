#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n;
    cin>>n;
    string s;
    cin>>s;
    map<char,ll>m;
    m['L']=0;
    m['I']=1;
    m['T']=2;
    vector<ll>count(3,0);
    for(int i=0;i<n;i++){
        if(s[i]=='L'){
            count[0]++;
        }
        else if(s[i]=='I'){
            count[1]++;
        }
        else if(s[i]=='T'){
            count[2]++;
        }
    }
    ll chck=count[0]==0;
    chck+= count[1]==0;
    chck+= count[2]==0;
    if(chck>1){
        cout<<-1<<endl;
        return;
    }
    string s1="LIT";
    char mchar;
    char smchar;
    char tmchar;
    ll maxi=*max_element(count.begin(),count.end());
    for(int i=0;i<3;i++){
        if(count[i]==maxi){
            mchar=s1[i];
            break;
        }
    }
    ll mi=*min_element(count.begin(),count.end());
    for(int i=0;i<3;i++){
        if(count[i]==mi){
            tmchar=s1[i];
            break;
        }
    }
    for(auto it:m){
        if(it.first!=tmchar&&it.first!=mchar){
            smchar=it.first;
            break;
        }
    }
    ll countms=0;
    ll counttm=0;
    vector<ll>ops;
    for(int i=0;i<n-1;i++){
        if((s[i]==mchar&&s[i+1]==smchar)||(s[i]==smchar&&s[i+1]==mchar)){
            countms++;
        }
        if((s[i]==tmchar&&s[i+1]==smchar)||(s[i]==smchar&&s[i+1]==tmchar)){
            counttm++;
        }
    }
    if((countms<count[m[smchar]]-count[m[tmchar]])){
        cout<<-1<<endl;
        return;
    }
    if(count[0]==count[1]&&count[1]==count[2]){
        cout<<0<<endl;
        return;
    }
    string afterOps=s;
    ll required=count[m[smchar]]-count[m[tmchar]];
    
    for(int i=0;i<afterOps.size()-1&&required>0;i++){
        if((s[i]==mchar&&s[i+1]==smchar)||(s[i]==smchar&&s[i+1]==mchar)){
            ops.push_back(i+1);
            required--;
            afterOps=afterOps.substr(0,i+1)+tmchar+afterOps.substr(i+2,afterOps.size()-i-1);
            i++;
        }
    }
    required=count[m[mchar]]-count[m[smchar]];
    required*=2;
    for(int i=0;i<afterOps.size()-1;i++){
        if((afterOps[i]==smchar&&afterOps[i+1]==mchar)||(afterOps[i]==mchar&&afterOps[i+1]==smchar)){
            ll curr=i+1;
            while(required--){
                ops.push_back(curr);
                curr++;
            }
            break;
        }
    }
    cout<<ops.size()<<endl;
    for(auto x:ops){
        cout<<x<<endl;
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
      

        }
    return 0;
}