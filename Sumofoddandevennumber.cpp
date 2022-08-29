#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int oddsum = 0, evensum = 0;
    while (n > 0) {
        if ((n % 10) % 2 == 0) {
            evensum += n % 10;
        } else {
            oddsum += n % 10;
        }
        n /= 10;
   }
   cout << evensum << " " << oddsum;
   return 0;
}
