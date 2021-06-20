#include <iostream>
#define SIZE 20
using namespace std;
class Stack{
private:
    int arr[SIZE];
    int top;
public:
    Stack();
    ~Stack();
    void push(int value);
    int pop();tcount();
    int getmax();
    int getmin();
    int getcount();
    void put();
};
