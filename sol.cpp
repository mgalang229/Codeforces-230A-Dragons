#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int s, n;
	cin >> s >> n;
	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back(make_pair(a, b));
	}
	sort(v.begin(), v.end());
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (v[i].first < s) {
			s += v[i].second;
			cnt++;
		}
	}
	cout << (cnt == n ? "YES" : "NO") << '\n';
	return 0;
}
