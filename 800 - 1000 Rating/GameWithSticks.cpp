#include<iostream>
using namespace std;

int main()
{
int n,m,a,b; cin>>n>>m;
 a = n * m;

if(m > n)
    b = a/m;
else b = a / n;
    
if(b&1)
cout<<"Akshat"<<endl;
else cout<<"Malvika"<<endl;
return 0;
}