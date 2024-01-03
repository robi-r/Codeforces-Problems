#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
int n;
cin>>n;
string s, sub, Maxtwo;
    cin>>s;
int Max = 0;
for(int i = 0; i < s.length() - 1; i++){
    sub = s.substr(i, 2);
    int twin = count(s.begin(), s.end(),sub[0]);

    if(twin > Max){
        Max = twin;
        Maxtwo = sub;
    }
   
}

 cout<<Maxtwo<<endl;   

return 0;    
}