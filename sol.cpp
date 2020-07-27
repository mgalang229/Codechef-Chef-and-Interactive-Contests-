#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int a[1000], n, r;
	cin >> n >> r;
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	for(int i = 0; i < n; ++i) {
		if(a[i] >= r) cout << "Good boi";
		else cout << "Bad boi";
		cout << "\n";
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	//int T;
	//cin >> T;
	//for(int nr = 1; nr <= T; ++nr) {
		//test_case();
	//}
	test_case();
	return 0;
}
