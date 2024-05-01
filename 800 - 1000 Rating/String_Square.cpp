#include<iostream>
#include<cstring>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--){ 
string s;
cin>> s;
int size = s.length();
int half = size / 2;
string arr1 , arr2;

for(int i = 0; i < half; i++)
{
     arr1 += s[i];
}

for(int j = half; j < size; j++)
{
    arr2 += s[j];
}

bool equal = (arr1 == arr2);
if(size%2 == 0 && equal){
    cout<<"YES"<<endl;
}else cout<<"NO"<<endl;
}
return 0;    
}