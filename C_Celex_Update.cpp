#include <bits/stdc++.h>

using namespace std;

long long ans[2000007];
long long a[1500][1500] = {}, curr = 1;

void solve() {
    int x1,y1,x2,y2;
	cin >> x1>>y1>>x2>>y2;
	cout << a[x2][y2]-a[x1][y1] << '\n';
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	for (int i = 2; i < 1500; i++) {
		for (int j = i - 1; j >= 1; j--) {
			a[j][i - j] = a[j - 1][i - j] + a[j][i - j - 1] - a[j - 1][i - j - 1];
		}
	}
	
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
	// solve();
}