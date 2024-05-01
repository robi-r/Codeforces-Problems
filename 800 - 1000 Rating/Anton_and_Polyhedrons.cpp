#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, count =0;;
    cin>>n;
    string fig[n];
for(int i = 0; i < n ; i++)
{
    cin>>fig[i];
    if(fig[i] == "Tetrahedron")
    {
        count += 4;
    }
   else if(fig[i] == "Cube")
    {
        count += 6;
    }
   else if(fig[i] == "Octahedron")
    {
        count += 8;
    }
   else if(fig[i] == "Dodecahedron")
    {
        count += 12;
    }
   else if(fig[i] == "Icosahedron")
    {
        count += 20;
    }
}   

    cout<<count<<endl;

return 0;
}