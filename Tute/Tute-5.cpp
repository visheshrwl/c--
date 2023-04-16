#include <iostream>
using namespace std;

class Alpha {
private:
  int alphaData;

public:
  Alpha(int data) {
    alphaData = data;
    cout << "Alpha constructor called" << endl;
  }

  ~Alpha() {
    cout << "Alpha destructor called" << endl;
  }

  void displayData() {
    cout << "Alpha data: " << alphaData << endl;
  }
};

class Beta {
private:
  int betaData;

public:
  Beta(int data) {
    betaData = data;
    cout << "Beta constructor called" << endl;
  }

  ~Beta() {
    cout << "Beta destructor called" << endl;
  }

  void displayData() {
    cout << "Beta data: " << betaData << endl;
  }
};

class Gamma : public Alpha, public Beta {
private:
  int gammaData;

public:
  Gamma(int a, int b, int c) : Alpha(a), Beta(b) {
    gammaData = c;
    cout << "Gamma constructor called" << endl;
  }

  ~Gamma() {
    cout << "Gamma destructor called" << endl;
  }

  void displayData() {
    Alpha::displayData();
    Beta::displayData();
    cout << "Gamma data: " << gammaData << endl;
  }
};

int main() {
  Gamma g(1, 2, 3);
  g.displayData();
  return 0;
}


#include <iostream>
#include <cstring>
using namespace std;

class X {
private:
  char xString[100];

public:
  X(const char* str) {
    strcpy(xString, str);
    cout << "X constructor called" << endl;
  }

  ~X() {
    cout << "X destructor called" << endl;
  }

  const char* getString() {
    return xString;
  }
};

class Y {
private:
  char yString[100];

public:
  Y(const char* str) {
    strcpy(yString, str);
    cout << "Y constructor called" << endl;
  }

  ~Y() {
    cout << "Y destructor called" << endl;
  }

  const char* getString() {
    return yString;
  }
};

class Z : public X, public Y {
private:
  char zString[200];

public:
  Z(const char* xStr, const char* yStr) : X(xStr), Y(yStr) {
    strcpy(zString, xStr);
    strcat(zString, yStr);
    cout << "Z constructor called" << endl;
  }

  ~Z() {
    cout << "Z destructor called" << endl;
  }

  const char* getString() {
    return zString;
  }
};

int main() {
  X xObj("Hello");
  Y yObj(" world");
  Z zObj(xObj.getString(), yObj.getString());

  cout << "X string: " << xObj.getString() << endl;
  cout << "Y string: " << yObj.getString() << endl;
  cout << "Z string: " << zObj.getString() << endl;

  return 0;
}

#include <iostream>
using namespace std;

// Base class
class Base {
public:
  int x;

  void show() {
    cout << "x = " << x << endl;
  }
};

// First derived class
class Derived1 : virtual public Base {
public:
  void set(int i) {
    x = i;
  }
};

// Second derived class
class Derived2 : virtual public Base {
public:
  void set(int i) {
    x = i;
  }
};

// Derived class from both Derived1 and Derived2
class Derived3 : public Derived1, public Derived2 {
public:
  void set(int i) {
    x = i;
  }
};

// Main function
int main() {
  Derived3 d;
  d.set(10);
  d.show();

  return 0;
}

#include <iostream>
using namespace std;

// Abstract base class Student
class Student {
public:
    virtual void display() = 0;  // Pure virtual function
};

// Derived class Science
class Science : public Student {
public:
    void display() {
        cout << "This is a Science student." << endl;
    }
};

// Derived class Art
class Art : public Student {
public:
    void display() {
        cout << "This is an Art student." << endl;
    }
};

// Derived class Commerce
class Commerce : public Student {
public:
    void display() {
        cout << "This is a Commerce student." << endl;
    }
};

// Main function
int main() {
    Student *students[3];
    students[0] = new Science;
    students[1] = new Art;
    students[2] = new Commerce;

    for (int i = 0; i < 3; i++) {
        students[i]->display();
    }

    return 0;
}
