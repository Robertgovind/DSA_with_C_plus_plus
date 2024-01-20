#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;

    void printData(){
        cout<<"Name :"<<name<<endl;
        cout<<"Age :"<<age<<endl;
    }
};

int main(){
    Student st;
    st.name="Govind";
    st.age=22;
    st.printData();
    return 0;
}