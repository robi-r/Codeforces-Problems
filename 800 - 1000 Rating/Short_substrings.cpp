#include<iostream>
#include<string>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    string b;
    cin>>b;

    string a = b.substr(0, 1);
    for(int i = 1; i < b.length(); i+=2)
    {
        a += b[i];
      
    }

    cout<<a<<endl;
}



return 0;   
}