#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int x, n1 = 9, sum = 0;
    cin>>x;
    if(x <= 9)
    {
        cout<<x<<endl;
    }
    else if(x >= 10)
    {
        bool Item = false;
        for(int i =1 ; i <= 9; i++)
        {
            sum = i + n1;
            if(sum == x)
            {
                cout<<i<<n1<<endl;
                Item = true;
                break;
            }else {
                sum = 0;
            }           
        }
        if(!Item)
            {
                cout<<-1<<endl;
            }

    }
    

    }
return 0;    
}