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
    queue<string>q;
    q.push("");
    while(1){
        string mex=q.front();
        q.pop();
        for(int i=0;i<26;i++){
            mex.push_back('a'+i);
            if(s.find(mex)==string::npos){
                cout<<mex<<endl;
                return;
            }
            q.push(mex);
            mex.pop_back();
        }
    }
}

};
int main(){
    ll t;
    cin >> t;
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}