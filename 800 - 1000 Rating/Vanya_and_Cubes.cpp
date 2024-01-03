#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cube = 0;
    int height = 0;
   
    while(cube <= n)
    {
        height++;
        cube += height * (height + 1) / 2;  

        cout <<"C="<< cube<< endl;
        cout<<"H=" << height<< endl;
    }

cout << height - 1<< endl;

}