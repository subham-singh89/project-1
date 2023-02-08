//inheritance OOPS
#include<iostream>
using namespace std;
using std::string;
class AskPromotion
{
    virtual void promotion()=0;
};
class Employee:AskPromotion
{   private:
    
    string company;
    int age;
    protected:
    string name;
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
    void promotion()
    {
        if(age>30)
        {
            cout<<name<<",You got promoted!"<<endl;
        }
        else
        cout<<name<<",N0 promotion for you!"<<endl;
    }
};
class developer:public Employee
{ public:
   string language;
   developer(string Name,string Company,int Age,string favourite )
   :Employee(Name,Company,Age)
   {
    language=favourite;
   };
    void fix_bug()
    {
        cout<<name<<" fixed the bug using "<<language<<endl;
    };
};
int main()
{

    developer d=developer("subham","radix trading",25,"c++");
    d.fix_bug();
    d.promotion();

}
