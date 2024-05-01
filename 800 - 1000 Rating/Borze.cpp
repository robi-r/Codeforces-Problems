#include<iostream>
#include<vector>
using namespace std;


int main()
{
    string n;
    cin>>n;
    int size = n.length();
    vector<int> number;

    for(int i= 0 ; i < size; i++)
    {
        char num = n[i];
        if(num == '.')
        {
            number.push_back(0);
        }
        else if(num == '-' && i + 1 < size && n[i+1] == '.')
        {
            number.push_back(1);
            i++;
        }
        else if(num == '-' && i+1 < size && n[i+1] == '-')
        {
            number.push_back(2);
            i++;
        }
    }
for(int i = 0; i < number.size();i++)
{
    cout<<number[i];
}
return 0;
}