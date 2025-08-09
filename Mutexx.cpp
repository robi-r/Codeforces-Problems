#include<iostream>
#include<thread>
#include<mutex>
#include<chrono>


using namespace std;

mutex driveLock;

void driveCar1(char sym)
{
    lock_guard<mutex> Lock(driveLock);
    for(int i = 0 ; i < 10; i++){
    cout<<sym<<endl;
    this_thread::sleep_for(chrono::seconds(1));
  }

}




int main()
{
    thread t1(driveCar1, '+');
    thread t2(driveCar1, '-');

    t1.join();
    t2.join();
}