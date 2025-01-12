#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve(string&ans) {
   
    string s;
    cin>>s;
    ll pos;
   cin>>pos; 
   ll n=s.size();
    string copy;
    copy=s;
    sort(copy.begin(),copy.end());
    reverse(copy.begin(),copy.end());
    unordered_map<char,int> mp;
    if(pos<=n){
        ans+=s[pos-1];
    }
    else{
        ll t=n;
        ll c=0;
        while(pos>t){
            pos-=t;
            mp[copy[c++]]++;
            t--;
        }
        int k=pos;
        int ind=0;
        for(int i=0;i<n&&pos;i++){
            ind=i;
            if(c&&s[i]>s[i+1]){
                c--;
                continue;
                
            }
            pos--;
            
        }
        ans+=s[ind];
    }
}

};
int main(){
    ll t;
    cin >> t;
    string ans;
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve(ans);
        delete s; 

        }
    cout<<ans<<endl;
    return 0;
}