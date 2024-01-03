#include<iostream>
#include<string>
using namespace std;


int main()
{
    int t, x;
    cin>>t;
    while(t--)
    {
        cin>>x;
        int n = x % 10;

        int digit = (n - 1) * 10;
        string s = to_string(x);
        int size = s.length();

        digit += (size * (size + 1)) / 2;  
        cout<<digit<<endl;
    }
return 0;    
}