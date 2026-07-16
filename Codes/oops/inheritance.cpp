#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
    string name;
    int roll_no;

    Student(){
        cout << "Parent cons"<<endl;
    }

    Student(string name, int roll_no){
        this->name = name;
        this->roll_no= roll_no;
    }
    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "Roll no: " << roll_no << endl;  
    }

    ~Student(){
        cout << "Parent destructor"<<endl;
    }
    
};

class derived : public Student{
    public:
    string subject;

    derived(){
        cout << "Child constructor" <<endl;
    }
    derived(string name, int roll_no, string subject) : Student(name, roll_no){
        this->subject = subject;
    }

    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "Roll no: " << roll_no << endl; 
        cout << "Subject: " <<subject<<endl;    
    }

    

    ~derived(){
        cout << "Child destructor"<<endl;
    }
    
};



int main(){
    Student s1;
    derived d1("Saavan", 454, "ECE");
    // s1.name = "Pavan";
    // s1.roll_no = 444;
   // s2.subject = "CS";
   
    // s2.name = "Chavan";
    d1.getInfo();
    return 0;
}