
//shallow copy & deep copy
#include <iostream>
#include <string>
using namespace std;

class student{
    public:
    //string name;
    string* namePtr;
    string subject;
    int* marksPtr;

    student(string name, string subject, int marks){
        //this->name = name;
        namePtr = new string;
        *namePtr = name;
        this->subject = subject;
        marksPtr = new int;
        *marksPtr = marks;

    }
    student(student &obj){
        this->subject = obj.subject;
        namePtr = new string;
        *namePtr = *obj.namePtr;
        marksPtr = new int;
        *marksPtr = *obj.marksPtr;

    }

    void getInfo(){
        cout << *namePtr <<endl;
        cout << subject <<endl;
        cout << *marksPtr <<endl;
    }
};


int main(){
    student s1("Sanjana", "CSE", 100);
    s1.getInfo();
    student s2(s1);

    // s1.getInfo();
    *(s2.marksPtr) = 99;  
    *(s2.namePtr) = "Pavan";  
    s2.getInfo();

    return 0;
}