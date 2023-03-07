#include<iostream>
using namespace std;

class Rectangle {
    public:
    int x;
};

int main(int argc, char const *argv[])
{
    Rectangle r;
    Rectangle *ptr;
    ptr = &r;
    ptr->x = 10;
    return 0;
}
