#include <iostream>
#include <thread>
#include <mutex>

using namespace std;
int result;
mutex mutex_obj;

void printNumber(int num)
{
    mutex_obj.lock();
    result = 1;
   for (int i = 1; i <= num; i++)
   {
       result = result * i;
       thread::id this_id = this_thread::get_id();
       cout << result;
       cout << " | Thread Id: " << this_id << endl;
       this_thread::sleep_for(chrono::milliseconds(2000) );
   }
   mutex_obj.unlock();
}
int main() {
    thread t1(printNumber, 5), t2(printNumber, 6), t3(printNumber, 10);
    
    t1.join();
    t2.join();
    t3.join();
}