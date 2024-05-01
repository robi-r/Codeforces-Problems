#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int best= arr[0];
    int worst= arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > best){
            best = arr[i];
            count++;
        }else if(arr[i] < worst){
            worst  = arr[i];
            count++;
        }
        
    }
    cout << count << endl;

    return 0;
}
