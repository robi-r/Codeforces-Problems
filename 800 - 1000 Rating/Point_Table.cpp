#include <iostream>
using namespace std;

int main() {
    int a, b, c,t;
    cin>>t;

    
    for(int i = 1; i <= t ; i++)
    {
    cin>>a>>b>>c;
    
    cout<<"case "<<i<<":";   
    if((a == 6 && a > b && a > c) || (b == 6 && b > a && b > c) || (c == 6 && c > a && c > b))
        {
        cout<<"case "<<i<<": perfectus"<<endl;
        
        }else cout<<"case "<<i<<": invalidum"<<endl;
    }
return 0;
}