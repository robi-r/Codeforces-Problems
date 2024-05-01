#include<iostream>
#include<cmath>
using namespace std;

struct TwinPrime {
    int first;
    int second;
};

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

TwinPrime Twins(int n) {
    int num = 3, cnt = 0;

    while (cnt < n) {
        if (isPrime(num) && isPrime(num + 2)) {
            cnt++;
        }
        if (cnt < n) {
            num += 2;
        }
    }

    return {num, num + 2};
}

int main() {
    int n;

    while (cin >> n) {
        TwinPrime result = Twins(n);
        cout << "(" << result.first << ", " << result.second << ")" << endl;
    }

    return 0;
}
