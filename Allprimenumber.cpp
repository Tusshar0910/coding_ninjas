#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        bool prime = true;
        for ( int j = 2; j * j <= 1; j++) {
             if (i % j == 0) {
                 prime = false;
             }
        }
        if (prime) cout << i << endl;
    }
  return 0;
}  
