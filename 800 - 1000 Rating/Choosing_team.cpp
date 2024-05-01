#include<iostream>
using namespace std;

int main()
{
    int n, k, count = 0;
    cin>>n>>k;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(5 - arr[i] >= k)
        {
            count++;
        }
    } 
    cout<< count / 3 <<endl;

return 0;    
}