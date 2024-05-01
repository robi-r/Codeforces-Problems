#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
    int n;
    cin>>n;
vector<int> student(n);
for(int i = 0; i < n; i++)
{
    cin>>student[i];
}

int count[4] = {0};
for(int i:student){
    count[i]++;
}
int team_count = min({count[1], count[2], count[3]});
cout<<team_count<<endl;

if (team_count > 0) {
        for (int i = 0; i < team_count; ++i) {
            int programmer = find(student.begin(), student.end(), 1) - student.begin() + 1;
            int mathematician = find(student.begin(), student.end(), 2) - student.begin() + 1;
            int sportsman = find(student.begin(), student.end(), 3) - student.begin() + 1;

            cout << programmer << " " << mathematician << " " << sportsman << endl;

            
            student[programmer - 1] = 0;
            student[mathematician - 1] = 0;
            student[sportsman - 1] = 0;
        }
    }





return 0;    
}