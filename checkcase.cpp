#include<iostream>
using namespace std;

int main() {
    char c;
    cin >>c;
    if (c >= 'A' and c <= 'Z')cout << 1;
    else if (c >= 'a' and c <= 'z') cout << 0;
    else cout << -1;
    return 0;
    }
 
