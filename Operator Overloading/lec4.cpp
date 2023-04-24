//Inheritance 

#include<iostream>
using namespace std;

class Rectangle
{
    private:
        int length;
        int breadth;
    public:
        Rectangle(int r = 0, int b = 0){
            length = r;
            breadth = b;
        }
        int getLength(){
            return length;
        }
        int getBreadth(){
            return breadth;
        }
        void setLength(int l){
            length = l;
        }
        void setBreadth(int b){
            breadth = b;
        }
        int area(){
            return length*breadth;
        }
        int perimeter(){
            return 2*(length+breadth);
        }
};

class Cuboid : public Rectangle{
    private:
        int height;
    public:
        Cuboid(int l = 0, int b = 0, int h = 0)
        {
            height = h;
            setLength(l);
            setBreadth(b);
        }
        int getHeight(){
            return height;
        }
        void getHeight(int h){
            height = h;
        }
        int volume(){
            return getLength()*getBreadth()*height;
        }
};

int main(){
    Cuboid c(10,5,3);
    cout << c.getLength() << "\t" << c.getBreadth() << "\t" << c.getHeight() << "\t" << c.volume();
}