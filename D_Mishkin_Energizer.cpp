#include <iostream>
#include <string>
#include <vector>
#include <cassert>
using namespace std;

char missingChar(char a, char b) {
   
    if ((a=='L' && b=='I') || (a=='I' && b=='L')) return 'T';
    if ((a=='L' && b=='T') || (a=='T' && b=='L')) return 'I';
    if ((a=='I' && b=='T') || (a=='T' && b=='I')) return 'L';
    return '#'; 
}

void solveTest() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int countL = 0, countI = 0, countT = 0;
    for (char ch : s) {
        if (ch=='L') countL++;
        if (ch=='I') countI++;
        if (ch=='T') countT++;
    }
    
    int missingCount = (countL == 0) + (countI == 0) + (countT == 0);
    if (missingCount > 1) {
        cout << -1 << "\n";
        return;
    }
    
    
    bool solved = false;
    vector<int> bestOps;

    for (int k = 0; k <= 2 * n && !solved; k++) {
        if ((n + k) % 3 != 0) continue;
        int target = (n + k) / 3;
        
        if (target < countL || target < countI || target < countT)
            continue;
        

        int needL = target - countL;
        int needI = target - countI;
        int needT = target - countT;
        
        string s_cur = s; 
        vector<int> ops; 
        
        bool progress = true;
        while (progress) {
            progress = false;
            for (int i = 0; i < (int) s_cur.size() - 1; i++) {
                if (s_cur[i] == s_cur[i+1])
                    continue;
        
                char x = missingChar(s_cur[i], s_cur[i+1]);
          
                bool needed = false;
                if (x == 'L' && needL > 0) needed = true;
                if (x == 'I' && needI > 0) needed = true;
                if (x == 'T' && needT > 0) needed = true;
                if (!needed)
                    continue;
                
        
                ops.push_back(i + 1);

                s_cur.insert(s_cur.begin() + i + 1, x);
      
                if (x == 'L') needL--;
                if (x == 'I') needI--;
                if (x == 'T') needT--;
                
                progress = true;
      
                break;
            }
        }
        

        if (needL == 0 && needI == 0 && needT == 0) {
        
            solved = true;
            bestOps = ops;
            
        }
    }
    
    if (!solved) {
        cout << -1 << "\n";
        return;
    }

    cout << bestOps.size() << "\n";
    for (int op : bestOps)
        cout << op << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solveTest();
    }
    return 0;
}
