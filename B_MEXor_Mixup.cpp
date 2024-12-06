#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll a,b;
    cin>>a>>b;
    int x;
    int m =(a-1)%4;
    if(m==0){
        x=a-1;
    }
    else if(m==1){
        x=1;
    }
    else if(m==2){
        x=a;
    }
    else{
        x=0;
    }

    if(x==b){
        cout<<a<<endl;
    }
    
    else if((x^a)==b){
        cout<<a+2<<endl;
    }
    else{
        cout<<a+1<<endl;
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