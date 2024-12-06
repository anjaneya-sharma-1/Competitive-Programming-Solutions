#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    string s1;
    string s2;
 
    cin >> s1;
    cin >> s2;
    if (s1.empty()) {
      cout<< s2.size();
    }
    if (s2.empty()) {
      cout<< s1.size();
    }
    if (s1.size() > s2.size()) {
      s1.swap(s2);
    }
    int n = s1.size();
    int i=0;
    int cnt=0;
    while(i<n){
        if(s1[i]==s2[i]){
            cnt++;
        }
        else{
            break;
        }
        i++;
    } 
    cout << s1.size()+s2.size()-i+(i!=0)<< endl;
  }
  return 0;
}
