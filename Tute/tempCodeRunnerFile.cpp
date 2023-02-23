#include <iostream>
using namespace std;

class Complex{
    private:
        int real;
        int img;
    public:
        Complex () {}
        Complex(int r, int i){
            real =r;
            img = i;
        }
        void set(int r, int i){
            real =r;
            img = i;
        }
        void display() {
            if(img>= 0){
                cout << real << " + "<< img << "i"<<endl;
            }
            else{
                cout << real << " - "<< -img<< "i" <<endl;
            }
        }
        Complex sum(Complex c){
            int r = real + c.real;
            int i = img + c.img;
            Complex result(r, i);
            return result;
        }
};


int main(){
    Complex c1,c2;
    c1.set(2,3);
    c2.set(4,-1);
    c1.display();
    c2.display();

    Complex result = c1.sum(c2);

    cout << "Sum is ";
    result.display();
    return 0;
}