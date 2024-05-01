#include <iostream>
using namespace std;

int main() {
    int t;  
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n, x;
      cin >> n >> x;

        if (n <= 2) {
            cout << 1 << endl;
        } else {
        int floors = (n - 2 + x - 1) / x;
        cout << floors + 1 << endl;
        }
    }

    return 0;
}
