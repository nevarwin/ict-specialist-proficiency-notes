#include <iostream>
using namespace std;

class BaseClass {
public:
    int num;

    virtual void myFunction() {
        cout << "Base class function" << endl;
    }
};

class DerivedClass : public BaseClass {
public:
    void myFunction() override {
        cout << "Derived class function" << endl;
    }
};

int main(){
    DerivedClass derivedClassObj;
    BaseClass baseClassObj;

    baseClassObj.myFunction();
    derivedClassObj.myFunction();

    baseClassObj.num = 12;
    cout << "base class obj: " << baseClassObj.num << endl;

    return 0;
}
