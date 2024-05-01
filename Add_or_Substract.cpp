#include<iostream>
using namespace std;

int main()
{
int t, a, b;
cin>>t;

while(t--){
    cin>>a>>b;
    if(a == b)
    {
        cout<<"0"<<endl;
    }
    else if(a < b){
        int ans = b - a;
        if(ans&1)
        {
                cout<<"1"<<endl;
        }else   cout<<"2"<<endl;
    }

    else if(a > b)
    {
        int ans = a - b;
        if(ans&1)
        {
                cout<<"2"<<endl;
        }else   cout<<"1"<<endl;
    }
            }

return 0;    
}