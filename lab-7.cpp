#include <iostream>
using namespace std;

class Time {
private:
    int h, m, s;
public:
    Time(int hours = 0, int minutes = 0, int seconds = 0) {
        h = hours;
        m = minutes;
        s = seconds;
    }
    void show() {
        cout << h << ":" << m << ":" << s << endl;
    }
    Time operator+(const Time& t) const {
        int totalSeconds = s + t.s + (m + t.m) * 60 + (h + t.h) * 3600;
        int newHours = totalSeconds / 3600;
        int newMinutes = (totalSeconds % 3600) / 60;
        int newSeconds = totalSeconds % 60;
        return Time(newHours, newMinutes, newSeconds);
    }
};

int main() {
    Time t1(5, 15, 34), t2(9, 53, 58), t3;
    t3 = t1 + t2;
    t3.show();
    return 0;
}


// #include <iostream>
// #include <cstring>
// using namespace std;

// class String {
// private:
//     char* str;
// public:
//     String(const char* s = "") {
//         str = new char[strlen(s) + 1];
//         strcpy(str, s);
//     }
//     String(const String& s) {
//         str = new char[strlen(s.str) + 1];
//         strcpy(str, s.str);
//     }
//     ~String() {
//         delete[] str;
//     }
//     String& operator=(const String& s) {
//         if (this != &s) {
//             delete[] str;
//             str = new char[strlen(s.str) + 1];
//             strcpy(str, s.str);
//         }
//         return *this;
//     }
//     bool operator==(const String& s) const {
//         return strcmp(str, s.str) == 0;
//     }
//     String operator+(const String& s) const {
//         char* newStr = new char[strlen(str) + strlen(s.str) + 1];
//         strcpy(newStr, str);
//         strcat(newStr, s.str);
//         String result(newStr);
//         delete[] newStr;
//         return result;
//     }
//     void show() {
//         cout << str << endl;
//     }
// };

// int main() {
//     String s1("Hello"), s2("world"), s3("Hello"), s4;
//     s4 = s1 + s2;
//     s1.show();
//     s2.show();
//     s3.show();
//     s4.show();
//     cout << (s1 == s2) << endl;
//     cout << (s1 == s3) << endl;
//     return 0;
// }


// // #include <iostream>
// // using namespace std;

// // class Matrix {
// // private:
// //     int rows;
// //     int cols;
// //     int** data;
// // public:
// //     Matrix(int r, int c) {
// //         rows = r;
// //         cols = c;
// //         data = new int*[rows];
// //         for (int i = 0; i < rows; i++) {
// //             data[i] = new int[cols];
// //             for (int j = 0; j < cols; j++) {
// //                 data[i][j] = 0;
// //             }
// //         }
// //     }
// //     Matrix(const Matrix& m) {
// //         rows = m.rows;
// //         cols = m.cols;
// //         data = new int*[rows];
// //         for (int i = 0; i < rows; i++) {
// //             data[i] = new int[cols];
// //             for (int j = 0; j < cols; j++) {
// //                 data[i][j] = m.data[i][j];
// //             }
// //         }
// //     }
// //     ~Matrix() {
// //         for (int i = 0; i < rows; i++) {
// //             delete[] data[i];
// //         }
// //         delete[] data;
// //     }
// //     Matrix& operator=(const Matrix& m) {
// //         if (this != &m) {
// //             for (int i = 0; i < rows; i++) {
// //                 delete[] data[i];
// //             }
// //             delete[] data;
// //             rows = m.rows;
// //             cols = m.cols;
// //             data = new int*[rows];
// //             for (int i = 0; i < rows; i++) {
// //                 data[i] = new int[cols];
// //                 for (int j = 0; j < cols; j++) {
// //                     data[i][j] = m.data[i][j];
// //                 }
// //             }
// //         }
// //         return *this;
// //     }
// //     friend Matrix operator*(const Matrix& a, const Matrix& b);
// //     void set(int i, int j, int value) {
// //         data[i][j] = value;
// //     }
// //     int get(int i, int j) const {
// //         return data[i][j];
// //     }
// //     void show() const {
// //         for (int i = 0; i < rows; i++) {
// //             for (int j = 0; j < cols; j++) {
// //                 cout << data[i][j] << " ";
// //             }
// //             cout << endl;
// //         }
// //     }
// // };

// // Matrix operator*(const Matrix& a, const Matrix& b) {
// //     if (a.cols != b.rows) {
// //         throw runtime_error("Matrix dimensions do not match");
// //     }
// //     Matrix c(a.rows, b.cols);
// //     for (int i = 0; i < a.rows; i++) {
// //         for (int j = 0; j < b.cols; j++) {
// //             int sum = 0;
// //             for (int k = 0; k < a.cols; k++) {
// //                 sum += a.data[i][k] * b.data[k][j];
// //             }
// //             c.data[i][j] = sum;
// //         }
// //     }
// //     return c;
// // }

// // int main() {
// //     Matrix a(2, 3);
// //     Matrix b(3, 2);
// //     a.set(0, 0, 1);
// //     a.set(0, 1, 2);
// //     a.set(0, 2, 3);
// //     a.set(1, 0, 4);
// //     a.set(1, 1, 5);
// //     a.set(1, 2, 6);
// //     b.set(0, 0, 7);
// //     b.set(0, 1, 8);
// //     b.set(1, 0, 9);
// //     b.set(1, 1, 10);
// //     b.set(2, 0, 11);
// //     b.set(2, 1, 12);
// //     cout << "Matrix a:" << endl;
// //     a.show();
// //     cout << "Matrix b:" << endl;
// //     b.show();
// //     try {
// //         Matrix c = a * b;
// //         cout << "Matrix c = a * b:" << endl;
// //         c.show();
// //     } catch (exception& e) {
// //         cerr << "Error: " << e.what() << endl;
// //     }
// // return 0;


// // #include <iostream>
// // #include <stdexcept>

// // using namespace std;

// // class SafeArray {
// // private:
// //     int* arr;
// //     int size;
// // public:
// //     SafeArray(int s) {
// //         size = s;
// //         arr = new int[size];
// //     }
// //     ~SafeArray() {
// //         delete[] arr;
// //     }
// //     int& operator[](int index) {
// //         if (index < 0 || index >= size) {
// //             throw out_of_range("Index out of bounds.");
// //         }
// //         return arr[index];
// //     }
// // };

// // int main() {
// //     SafeArray a(5);
// //     for (int i = 0; i < 5; i++) {
// //         a[i] = i;
// //     }
// //     try {
// //         cout << a[6] << endl; // should throw an out_of_range exception
// //     } catch (exception& e) {
// //         cerr << "Error: " << e.what() << endl;
// //     }
// //     return 0;
// // }


// #include <iostream>
// #include <string>
// using namespace std;

// class String {
// private:
//     string str;
// public:
//     String(const char* s = "") : str(s) {}
//     String(const string& s) : str(s) {}
//     String(const String& s) : str(s.str) {}
//     String& operator=(const String& s) {
//         str = s.str;
//         return *this;
//     }
//     bool operator==(const String& s) const {
//         return str == s.str;
//     }
//     String operator+(const String& s) const {
//         String result(str + s.str);
//         return result;
//     }
//     void show() const {
//         cout << str << endl;
//     }
// };

// int main() {
//     String s1("Hello"), s2("world"), s3("Hello"), s4;
//     s4 = s1 + s2;
//     s1.show();
//     s2.show();
//     s3.show();
//     s4.show();
//     cout << (s1 == s2) << endl;
//     cout << (s1 == s3) << endl;
//     return 0;
// }



// #include <iostream>
// #include <string.h>
// using namespace std;

// class STRING{
//     private:
//         string str;
//     public:


// };
