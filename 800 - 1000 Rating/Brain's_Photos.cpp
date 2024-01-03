#include <iostream>
#include <string>
using namespace std;


int main()
{
int n, m;
bool color = false;
cin>> n>> m;
char arr[n][m];
for(int i = 0; i < n; i++)
{
    for(int j = 0; j < m; j++)
    {
        cin>>arr[i][j];
    }
}
string s;
for(int i = 0; i < n; i++)
{
    for(int j = 0; j < m; j++)
    {
        if(arr[i][j] == 'C' || arr[i][j] == 'Y' || arr[i][j] == 'M' ){
            color = true;
        }
    }
}
 if(color == true){
    cout<<"#Color"<<endl;
 }
 else cout<<"#BLack&White"<<endl;
 
return 0;    
}