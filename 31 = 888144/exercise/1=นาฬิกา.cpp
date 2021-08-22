#include <iostream>
#include <time.h>

using namespace std;

void sleepcp(int milliseconds);

void sleepcp(int milliseconds) // cross-platform sleep function
{
    clock_t time_end;
    time_end = clock() + milliseconds * CLOCKS_PER_SEC/1000;
    while (clock() < time_end)
    {
    }
}
int main()
{
cout << "Hi! At the count to 3, I'll die! :)" << endl;
sleepcp(3000);
cout << "urrrrggghhhh!" << endl;
}
