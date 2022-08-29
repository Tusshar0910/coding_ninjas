#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	if (n == 1 || n == 2) {
		cout << 1;
		return 0;
	}
	int a = 1, b = 1;
	int ans;
	for (int i = 3; i <= n; i++) {
		ans = a + b;
		a = b;
		b = ans;
	}
	cout << ans;
	return 0;
} 
