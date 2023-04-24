#include<iostream>
using namespace std;

class RationalNumbers{
    private:
        int numerator, denominator;
    public:
    RationalNumbers(int n = 1, int d = 1){
        numerator = n;
        denominator = d;
    }
    friend RationalNumbers operator+(RationalNumbers r1, RationalNumbers r2);
    friend ostream & operator<< (ostream & o, RationalNumbers r); 
};

RationalNumbers operator+(RationalNumbers r1, RationalNumbers r2){
    RationalNumbers temp;
    temp.numerator = r1.numerator + r2.numerator;
    temp.denominator = r1.denominator + r2.denominator;
    return temp;
}

ostream & operator<< (ostream & o, RationalNumbers r){
    o << r.numerator << "/" << r.denominator;
}

int main(){
    RationalNumbers r1(10,11), r2(11,12), r3;
    r3 = r1 + r2;

    cout << "Sum of " << r1 << " and " << r2 << " is " << r3;
}