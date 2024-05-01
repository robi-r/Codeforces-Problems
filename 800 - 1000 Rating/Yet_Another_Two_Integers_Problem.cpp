#include<iostream>
using namespace std;

int main()
{
    int t, a, b;
    cin>>t;
    while(t--)
    {
        cin>> a>> b;
        int sum = abs(a - b);
        if(sum == 0)
        {
            cout<< 0<<endl;
        }
        else
            {
            int ans = (sum + 9) / 10;
            cout<< ans <<endl;
            }
    }
return 0;
}