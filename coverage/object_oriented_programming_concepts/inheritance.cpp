#include <iostream>
using namespace std;

class ParentClass{
public: 
    int parentNum;

    void parentFunction(){
        cout << "This is a parent class" << endl;
    }
};

class ChildClass : public ParentClass{
public: 
    void childFunction(){
        cout << "This is a child class" << endl;
        cout << parentNum;
    }
};

int main(){

    ParentClass parentObj;
    ChildClass childObj;

    childObj.parentNum = 10;
    childObj.childFunction();


    return 0;
}