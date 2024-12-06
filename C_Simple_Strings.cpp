#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    string s;
    cin>>s;
    ll n=s.length();
    for(int i=1;i<n-1;i++){
        if(s[i]==s[i-1]&&s[i]==s[i+1]){
            if(s[i]=='z'){
                s[i]=(char)s[i]-1;
            }
            else{
                s[i]=(char)s[i]+1;
            }
            
        }
    }
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            if(i==0){
                if(s[i]=='a'){
                    s[i]=(char)s[i]+1;
                }
                else{
                    s[i]=(char)s[i]-1;
                }
            }
            else{
                for(int j=0;j<26;j++){
                    if((char)j+'a'!=s[i-1]&&(char)j+'a'!=s[i+1]){
                        s[i]=(char)j+'a';
                        break;
                    }
            }
        }
    }}
    cout<<s<<endl;
    
}

};
int main(){
    ll t=1;

    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}