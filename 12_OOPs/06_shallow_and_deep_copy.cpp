#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int age;

    Student(string name,int age){
        this->name=name;
        this->age=age;
    }

    Student( Student &st){
        this->name=st.name;
        this->age=st.age;
    }


    void printData(){
        cout<<"Name :"<<name<<endl;
        cout<<"Age :"<<age<<endl;
    }
    string getName(){
        return this->name;
    }
    void setName(string name){
        this->name=name;
    }
    int getAge(){
            return this->age;
        }
        void setAge(int age){
            this->age=age;
        }  
};

int main(){
    Student st1("Govind Kumar Yadav",22);
    Student st2(st1);
    st2.setName("Mohit Singh Budal");
    cout<<"Student1 "<<endl;
    st1.printData();
    cout<<"Student2"<<endl;
    st2.printData();
    cout<<"Student1"<<endl;
    st1.printData();

    return 0;
}