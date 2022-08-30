#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int x;
	cin >> x;
	int i = 1;
	int count = 1;
	while (count <= x) {
		if ((3 * i + 2) % 4 == 0) {
			i++;
			continue;
		}
		cout << (3 * i + 2) << " ";
		i++;
		count++;
	}
	return 0;
} 
