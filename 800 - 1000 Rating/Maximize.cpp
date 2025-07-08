#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findLargestDivisor(int x) {
    for (int i = x - 1; i >= 1; --i) {
        if (x % i == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    int t; cin>>t;
    while(t--){
    int x;
    cin >> x;
    
if(x % 2 != 0){
    cout<<x -1<<endl;
}

    int y = findLargestDivisor(x);
    int gcdResult = gcd(x, y);
    int maxResult = gcdResult + y;
if(maxResult == x){
    cout<<y<<endl;
}
    }

    return 0;
}
