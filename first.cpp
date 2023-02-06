//constructor and encapulations
// 2/06/2023 10:01
#include<iostream>
using namespace std;
using std::string;
class Employee
{   private:
    
    string name;
    string company;
    int age;

    public:

    void set_namel(string Name)
    {
        name=Name;
    }
    string getname()
    {
        return name;
    }
    void set_company(string Company)
    {
        company=Company;
    }
    string getcompany()
    {
        return company;
    }
    void setAge(int Age )
    {  if(Age>=18)
       age=Age;
    }
    int getAge()
    {
        return age;
    }

    void introduce_yourself()
    {
        cout<<"Name-"<<name<<endl;
        cout<<"Company-"<<company<<endl;
        cout<<"Age-"<<age<<endl;
    }
    Employee (string Name,string Company,int Age)
    {
        name=Name;
        company=Company;
       age=Age;
    };


};
int main()
{
    Employee employee1=Employee("hirdyansh","youtube",23);
    employee1.introduce_yourself();
    employee1.setAge(15);
    cout<<employee1.getname()<<" is "<<employee1.getAge();
}
