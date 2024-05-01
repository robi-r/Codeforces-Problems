#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

     int t_drink = (k * l) / nl;
     int t_lime = c * d;
     int t_salt = p / np;
     int Min = min({t_drink,t_lime,t_salt})/n;

     cout << Min << endl;

    return 0;


}