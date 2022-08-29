#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int i = 1;
	while (i <= n) {
		int k = 1;
		while (k <= n - i) {
			cout << " ";
			k++;
		}
		int j = 1;
		while (j <= 2 * i - 1) {
			cout << "*";
			j++;
		}
		cout << endl;
		i++;
	}
	return 0;
} 
