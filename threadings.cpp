#include<iostream>
#include<thread>
#include<map>
#include<string>
#include<chrono>

using namespace std;

void fun1(char sym){
    for(int i = 0; i < 200; i++)
    cout<<sym;
}
void fun2(){
    for(int i = 0; i < 200; i++)
    cout<<"-";
}


void Refresh(map<string, int> forecastMap){
    while(true){
        for(auto& items:forecastMap){
            items.second++;
            cout<<items.first<<" - " << items.second <<endl;
        }
        this_thread::sleep_for(3000ms);
    }
}

int main()
{
    map<string, int> forecastMap = {
    {"Dhaka", 69},
    {"Rajshahi", 79},
    {"Nyc", 84},
    {"Delhi", 43}
};


    thread work1(Refresh, forecastMap);
   
}