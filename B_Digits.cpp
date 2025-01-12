#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    bool isDivisibleBy7(int d, long long n) {
    if (d == 0) return true;
    
    int cycle[] = {1, 3, 2, 6, 4, 5};
  
    int factorialMod6;
    
    if (n < 4) {
        if (n == 1) factorialMod6 = 1;
        else if (n == 2) factorialMod6 = 2;
        else if (n == 3) factorialMod6 = 0; 
    } else {
        factorialMod6 = 0; 
    }
    
    int powerMod7 = cycle[factorialMod6];
    int numeratorMod7 = (powerMod7 - 1 + 7) % 7;
    int denominatorInv = 4;
    int resultMod7 = (numeratorMod7 * denominatorInv) % 7;
    int finalMod7 = (d * resultMod7) % 7;
    
    return finalMod7 == 0;
}


void solve() {
    ll n,d;
    cin>>n>>d;
    cout<<1<<" ";
    if(n>=3||d%3==0){
        cout<<3<<" ";
    }
    if(d==5){
        cout<<5<<" ";
    }
    if(isDivisibleBy7(d,n)){
        cout<<7<<" ";
    }
    if(n>=6||(d%3==0&&n>=3)||d==9){
        cout<<9<<" ";
    }
    cout<<endl;

    
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