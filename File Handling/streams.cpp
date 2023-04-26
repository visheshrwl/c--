#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream outfile("my.txt", ios::trunc);

    outfile << endl << "Hello" <<endl;
    
    outfile.close();
}