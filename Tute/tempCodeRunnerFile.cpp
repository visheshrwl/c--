#include <iostream>
using namespace std;

class MyClass2;

class MyClass1 {
    private:
        int value;
    public:
        MyClass1(int v) {
            value = v;
        }
        friend void swapValues(MyClass1& obj1, MyClass2& obj2);
};

class MyClass2 {
    private:
        int value;
    public:
        MyClass2(int v) {
            value = v;
        }
        friend void swapValues(MyClass1& obj1, MyClass2& obj2);
};

void swapValues(MyClass1& obj1, MyClass2& obj2) {
    int temp = obj1.value;
    obj1.value = obj2.value;
    obj2.value = temp;
}

int main() {
    MyClass1 obj1(10);
    MyClass2 obj2(20);

    cout << "Before swapping:" << endl;
    cout << "obj1.value = " << obj1.value << endl;
    cout << "obj2.value = " << obj2.value << endl;

    swapValues(obj1, obj2);

    cout << "After swapping:" << endl;
    cout << "obj1.value = " << obj1.value << endl;
    cout << "obj2.value = " << obj2.value << endl;

    return 0;
}