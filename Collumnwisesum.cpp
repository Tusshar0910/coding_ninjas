#include <iostream>
using namespace std;

int main() {
	int m, n;
	cin >> m >> n;
	int a[m][n];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		int s = 0;
		for (int j = 0; j < m; j++) {
			s += a[j][i];
		}
		cout << s << " ";
	}
	return 0;
}
