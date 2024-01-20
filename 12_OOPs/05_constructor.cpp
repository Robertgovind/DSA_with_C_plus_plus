#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;

    Student( string name, int age){
        this->name=name;
        this->age=age;
    }


    void printData(){
        cout<<"Name :"<<name<<endl;
        cout<<"Age :"<<age<<endl;
    }
};

int main(){
    Student st("Govind Kumar Yadav",22);
    st.printData();
    return 0;
}