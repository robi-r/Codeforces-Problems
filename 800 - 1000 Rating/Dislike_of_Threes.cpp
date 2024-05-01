#include<iostream>
#include<vector>
using namespace std;

int main()
{
int t,k;
cin>>t;

while(t--)
{
cin>>k;

int i = 1;
while(k > 0){
if(i % 3 != 0 && i % 10 != 3 )
{
   k--;
}
i++;
}
cout<<i-1<<endl;
}

return 0;    
}