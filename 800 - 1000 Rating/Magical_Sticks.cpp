#include<iostream>
#include<cmath>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--){
     int a;
        cin>> a;
    if(a % 2 == 0)
    {
        cout<< a / 2 <<endl;
    }
    else
    {
        cout<< (a + 1) / 2 <<endl;
    }
}
return 0;    
}