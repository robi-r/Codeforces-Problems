#include<iostream>
#include<algorithm>
using namespace std;

int main(void)
{
    int a, b;
    cin>> a>>b;

    int Min = min(a, b);
    int Max = max(a, b);

    int diff = (Max - Min) / 2;
    cout<< Min << " "<<diff <<endl;
}