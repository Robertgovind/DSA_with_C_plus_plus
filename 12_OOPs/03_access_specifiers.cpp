#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    int age;

    public:
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
    Student st;
    st.setName("Govind Kumar Yadav");
    st.setAge(22);
    st.printData();
    return 0;
}