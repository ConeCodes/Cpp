#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Employee
{
    private:
    string EmpName;
    int EmpNum;
    string HireDate;

    public:
    void setEmpName(string);
    void setEmpNum(int);
    void setHireDate(string);
    
    string getEmpName() const;
    int getEmpNum() const;
    string getHireDate() const;
    Employee();
};

void Employee::setEmpName(string x)
{
    EmpName = x;
}

void Employee::setEmpNum(int y)
{
    EmpNum = y;
}

void Employee::setHireDate(string z)
{
    HireDate = z;
}

string Employee::getEmpName() const
{
    return EmpName;
}

int Employee::getEmpNum() const
{
    return EmpNum;
}

string Employee::getHireDate() const
{
    return HireDate;
}

Employee::Employee()
{
    cout << "I will ask you some questions about an employee.\n\n";
}

class ProductionWorker : public Employee
{
    private:
    int Shift;
    double HourlyPayRate;

    public:
    void setShift(int);
    void setHourlyPayRate(double);
    int getShift() const;
    double getHourlyPayRate() const;
    ProductionWorker();
};

void ProductionWorker::setShift(int a)
{
    Shift = a;
}

void ProductionWorker::setHourlyPayRate(double b)
{
    HourlyPayRate = b;
}

int ProductionWorker::getShift() const
{
    return Shift;
}

double ProductionWorker::getHourlyPayRate() const
{
    return HourlyPayRate;
}

ProductionWorker::ProductionWorker()
{
    
    cout << "After answering the questions,\n";
    cout << "I will display the employee's information.\n\n\n";
}

int main()
{
    ProductionWorker info;
    string name;
    string lastName;
    int num;
    string date;
    int shift;
    string shiftTime;
    double rate;

    cout << "What is the employee's first name? ";
    cin >>  name;  
    cout << "What is the employee's last name?";
    cin >> lastName; 

    cout << "What is the employee's number? ";
    cin >> num;

    cout << "What is the employee's hire date?\n";
    cout << "(Month, day, and year without any slashes,\n";
    cout << "dashes, commas, or other punctuation.)\n";
    cout << "For example, January 14, 1983 would look like 01141983. ";
    cin >> date;

    cout << "Does the employee day shift or night shift? ";
    cin >> shiftTime;

    cout << "Does the employee work shift 1 or 2? ";
    cin >> shift;

    cout << "How much does the employee make per hour? ";
    cin >> rate;

    info.setEmpName(name);
    info.setEmpNum(num);
    info.setHireDate(date);
    info.setShift(shift);
    info.setHourlyPayRate(rate);

    cout << "\n\nHere is the employee's data:\n\n";
    cout << "Employee's Name: " << info.getEmpName() << " " << lastName << endl;
    cout << "Employee's Number: " << info.getEmpNum() << endl;
    cout << "Employee's Hire Date: " << info.getHireDate() << endl;
    cout << "Employee's Shift: " << shiftTime << endl; 
    cout << "Employee's Shift Number: " << info.getShift() << endl;
    cout << "Employee's Hourly Pay Rate: $" << info.getHourlyPayRate() << endl << endl;
    cout << "Press any key to continue..." << endl; 

    return 0;
}