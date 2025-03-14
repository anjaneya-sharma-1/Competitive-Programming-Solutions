#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    bool checkValidString(string s) {
        bool ans=1;
        int l =0;
        int r = 0;
        map<pair<int,int>,bool>mp;
        for(int i  =0;i<s.size();i++){
            if(s[i]=='('){
                l++;
                r++;
            }
            else if(s[i]=='?'){
                if(mp[{l,r-3}]){
                    return 0;
                }
                l=max(l-1,0);
                r++;
                mp[{l,r}]=1;
            }
            else{
                r--;
                l=max(l-1,0);
                if(r<0){
                    return 0;
                }
            }
        }
        return l==0;
    }
void solve() {
    string s;
    cin>>s;
    ll n=s.length();
    if(checkValidString(s)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }   
}};
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