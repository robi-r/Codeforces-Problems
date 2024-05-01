#include<iostream>
using namespace std;
/*
prob = promlem count
gt = given time
tt = total time
sumt= sum of time
ct = coding time
rt = remaining time
*/
int main()
{
    int prob, gt, tt= 240, count = 0, sumt = 0;
    cin>>prob>>gt;
    int rt = tt - gt;
    for(int i = 1; i <= prob; i++)
    {
        int ct = 5 * i;
        sumt += ct;
        if(sumt > rt){
           break; 
        }
        count++;
    }

cout<<count<<endl;

return 0;
}