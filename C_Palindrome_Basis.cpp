#include <bits/stdc++.h>
using namespace std;
 
const int N = 40004, M = 498;
const long long MOD = 1000000007;
long long dp[N][M];
 
int reverse(int n)
{
    int r=0;
    while(n>0)
    {
        r=r*10+n%10;
        n/=10;
    }
    return r;
}
 
bool palindrome(int n)
{
    return (reverse(n)==n); 
}
 
int main()
{
    vector<int> palin;
    palin.push_back(0);
    for(int i=1;i<=N;i++)
    {
        if(palindrome(i))
            palin.push_back(i);
    }
    
    vector<int> prev(N+1,0);
    prev[0]=1;
    for(int i=0;i<palin.size();i++){
        vector<int> curr(N+1,0);
        for(int j=0;j<=N;j++){
            int notTaken=prev[j];
            int taken=0;
            if(j>=palin[i]){
                taken=curr[j-palin[i]];
            }
            curr[j]=(notTaken+taken)%MOD;
        }
        prev=curr;
    }
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        cout << prev[n] <<endl;
    }
}