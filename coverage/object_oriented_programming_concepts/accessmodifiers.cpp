#include <iostream>
using namespace std;

class ParentClass {
public: 
    int publicNum;    // Public member variable

    void parentFunction() {
        cout << "This is a parent class" << endl;
    }

protected:
    int protectedNum; // Protected member variable

private:
    int privateNum;   // Private member variable
};

class ChildClass : public ParentClass {
public: 
    void childFunction() {
        cout << "This is a child class" << endl;
        cout << "Accessing publicNum from ChildClass: " << publicNum << endl;
        cout << "Accessing protectedNum from ChildClass: " << protectedNum << endl;
        // cout << "Accessing privateNum from ChildClass: " << privateNum << endl; // Error: privateNum is not accessible in ChildClass
    }

    void setProtectedNum(int num){
        protectedNum = num;
    }

    void getProtectedNum(){
        cout << "Accessing protectedNum from ChildClass: " << protectedNum << endl;
    
    }
};

int main() {
    ParentClass parentObj;
    ChildClass childObj;

    // Accessing publicNum from main function
    parentObj.publicNum = 10;
    cout << "Accessing publicNum from main function: " << parentObj.publicNum << endl;

    // Accessing protectedNum and publicNum through ChildClass object
    childObj.publicNum = 20;
    cout << "Accessing publicNum from main function: " << childObj.publicNum << endl;
    // childObj.setProtectedNum(30);   
    childObj.getProtectedNum();
    // childObj.childFunction();

    // Accessing parentFunction from ParentClass object
    // parentObj.parentFunction();

    return 0;
}
