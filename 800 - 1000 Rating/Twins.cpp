#include<iostream>
#include<vector>

using namespace std;

bool isPrime(int n) {
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

vector<pair<int, int>> Prime(int n) {
    vector<pair<int, int>> twins;

    int num = 3, cnt = 0;
    while (cnt < n) {
        if (isPrime(num) && isPrime(num + 2)) {
            twins.push_back(make_pair(num, num + 2));
            cnt++;
        }
        num += 2;
    }
    return twins;
}

int main() 
{

    int n;

    while (cin >> n) {
        vector<pair<int, int>> result = Prime(n);

        if(!result.empty())
        {
            auto &last_pair = result.back();
            cout<<"("<<last_pair.first<<", "<<last_pair.second<<")"<<endl;
        }
    }


    return 0;
}
