#include <iostream>
#include <string>
using namespace std;

class Property {
private:
    int p_id;
    string p_name;
    float p_price;
public:
    void setdata() {
        cout << "Enter Property ID: ";
        cin >> p_id;
        cout << "Enter Property Name: ";
        cin >> p_name;
        cout << "Enter Property Price: ";
        cin >> p_price;
    }
    void getdata() {
        cout << "Property ID: " << p_id << endl;
        cout << "Property Name: " << p_name << endl;
        cout << "Property Price: " << p_price << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of properties: ";
    cin >> n;

    Property* arr = new Property[n]; // dynamically allocate memory for array of n objects

    for (int i = 0; i < n; i++) {
        arr[i].setdata(); // set data members for each object
    }

    for (int i = 0; i < n; i++) {
        arr[i].getdata(); // display data members for each object
    }

    delete[] arr; // deallocate memory for array of objects

    return 0;
}
