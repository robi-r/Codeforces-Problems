#include<iostream>
using namespace std;

int main()
{
    int x1, x2, x3;
    cin>>x1 >>x2 >>x3;
    int max, min;

    if(x1 > x2 && x1 > x3)
    {
        max = x1;
    }
    else if(x2 > x1 && x2 > x3)
    {
        max = x2;
    }
    else{
        max = x3;
    }

    if (x1 < x2 && x1 < x3)
    {
        min = x1;
    }
    else if (x2 < x1 && x2 < x3)
    {
        min = x2;
    }
    else {
        min = x3;
    }
    cout<<max - min <<endl;

return 0;    
}