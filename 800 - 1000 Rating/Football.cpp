#include<iostream>
using namespace std;

int main()
{
string s;
int c1= 0, c2 = 0;
cin>>s;

for(int i = 0; i < s.length(); i++)
{
    while(c1 < 7 && s[i] == s[i + 1])
    {
          c1++;
          i++;
    }
        if(c1 > 5)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    
    c1 = 0;
}

cout<<"NO"<<endl;
return 0;    
}