#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int ans = 1;
    while (n--) {
        ans *= m;
    }
    cout << ans;
    return 0;
}
