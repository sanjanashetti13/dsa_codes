#include <iostream>
#include <string>
using namespace std;

class student{
    public:
    string *namePtr;
    string subject;
    int *marksPtr;


    student(student &obj){
    this->subject = obj.subject;
    namePtr = new string;
    *namePtr = *obj.namePtr;
    marksPtr = new int;
    *marksPtr = *obj.marksPtr;
    }
    student(string name, string subject, int marks){
        namePtr = new string;
        *namePtr = name;
        this->subject = subject;
        marksPtr = new int;
        *marksPtr = marks;
    }
    ~student(){
        cout << "destructor"<<endl;
        delete marksPtr; //memoryleak
    }

        void print(){
            cout << "Name: " << *namePtr<<endl;
            cout << "Subject " << subject<<endl;
            cout << "Marks: " << *marksPtr<<endl;
        }
};

int main(){
    student s1("sanjana", "maths", 95);
    s1.print();
    student s2(s1);
   
    *(s2.marksPtr) = 96;
     s2.print();
    return 0;
}
