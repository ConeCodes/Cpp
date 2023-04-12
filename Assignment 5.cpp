#include <iostream>
#include <string>
#include <iomanip>
using namespace std; 

class Employee 
{
    private:
    string name, department, position;
    int idNumber;

    public: 
    Employee(string n, int i, string d, string p);
    Employee();
    Employee(string n, int i);
    
    string getDepartment()
    {
        return department;
    }
    
    string getName()
    {
        return name;
    }

    
    int getidNumber()
    {
        return idNumber;
    }
    
    string getPosition()
    {
        return position;
    }
    
    void setDepartment(string d)
    {
        department = d;
    }

    void setPosition(string d)
    {
        position = d;
    }

    void setName(string d)
    {
        name = d;
    }
    
    void setidNumber(int d)
    {
        idNumber = d;
    }
};
    Employee::Employee(string n, int i, string d, string p)
    {
        name = n;
        idNumber = i;
        department = d;
        position = p;
    }

    Employee::Employee(string n, int i)
    {
        name = n;
        idNumber = i;
        department = " ";
        position = " ";
    }

    Employee::Employee()
    {
        name = " ";
        department = " ";
        position = " ";
        idNumber = 0; 
    }

    
void displayEmployee(Employee);


int main ()
{
    Employee e1("Susan Mayers",47899,"Accounting","Vice President");
    Employee e2("Mark Jones",39119,"IT","Programmer");
    Employee e3("Joy Rogers",81774,"Manufacturing","Engineer");

    Employee employee[] = {e1, e2, e3};
    displayEmployee(employee[0]);
    displayEmployee(employee[1]);
    displayEmployee(employee[2]);

    cout << "Press any key to continue . . . ";
    
    return 0;
}

void displayEmployee(Employee e)
{ 

cout << "\nName: " << e.getName() << endl; 
cout << "ID Number: " << e.getidNumber() << endl; 
cout << "Department: " << e.getDepartment() << endl;
cout << "Position: " << e.getPosition() << endl; 
cout << "\n" << endl; 
 
}