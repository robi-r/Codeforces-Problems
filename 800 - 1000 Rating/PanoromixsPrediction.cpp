#include<iostream>
using namespace std;

bool isPrime(int n)
{
    if(n <= 1)
    {
        return false;
    }
    for(int i = 2; i * i <= n ; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int nextPrime(int x)
{
    x++;
    while(!isPrime(x))
    {
        x++;
    }
    return x;
}

int main()
{
    int n, m;
    cin>> n >> m ;

    if(nextPrime(n) == m)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}