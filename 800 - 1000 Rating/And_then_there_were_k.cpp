#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        int highest_set_bit = 0;
        while((1 << highest_set_bit) <= n){
            highest_set_bit++;
        }
        
        int result = (1 << (highest_set_bit - 1)) - 1;
        cout << result << endl;
    }

    return 0;    
}
