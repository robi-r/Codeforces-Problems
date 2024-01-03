#include <iostream>
using namespace std;

int main()
    {
        int n;
        cin>>n;
        int res  = 1;
        int base = 5;
        int mod  = 100;
        while(n > 0)
            {
            if (n % 2 == 1)
            {
                res = (res * base) % mod;
            }
            base = (base * base) % mod;
            n /= 2;
            }
    cout<<res<<endl;

return 0;    
}