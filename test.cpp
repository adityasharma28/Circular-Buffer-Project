#include<iostream>
#include "circular_buffer.hpp"
using namespace std;
int main()
{
    CircularBuffer<int,10> buf;
    for(int i=0;i<10;i++)
    {
        buf.push_back(i);
    }
    while(!buf.empty())
    {
        cout<<"popping: "<<buf.head()<<endl;
        buf.pop();
    }
    return 0;
}