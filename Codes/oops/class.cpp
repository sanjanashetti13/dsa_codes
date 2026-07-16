#include <iostream>
#include <string>
using namespace std;

class Teacher{
    // properties/attributes
    private:
    double salary;
    public:
    string name;
    string department;
    string subject;

    Teacher(){
        cout << "HI IM CONSTRUCTOR" <<endl;
    }

    Teacher(string n, string d, string s){
        name = n;
        department = d;
        subject = s;
    }

    //when params have same names as members

    Teacher(string name, string department){
        this->name = name;
        this->department = department;
    }

    Teacher(Teacher &obj){
        cout << "COPY CONSTRUCTOR";
        this->name = obj.name;
        this->department = obj.department;
        this->subject = obj.subject;
    }

    void getInfo(){
        cout << "My Name is " << name << "I belong to " << department;
    }
    

    //methods/member functions
    void ChangeDept(string newdept){
        department = newdept;
    }

    //setter
    void setsalary(double s){
        salary = s;
    }

    double getSalary(){
        return salary;
    }

};


int main(){
    Teacher t1("Sanjana", "CSE", "KLE");
    
    // Teacher t2;
    // cout << t2.subject <<endl;
    // t1.getInfo();
    // t1.name = "Pavan";

    
    // cout << "T1:"<<t1.name<<endl;
    // cout << t2.name;
    // t1.setsalary(12);
    // cout << t1.getSalary();

    Teacher t3(t1);
    cout << t3.name<<endl;;
    cout << t3.department<<endl;
    cout << t3.subject<<endl;

    return 0;
}
