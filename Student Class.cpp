#include <iostream>
#include <string>
using namespace std;

int main()
{
class Student
{
    private:
    string name, major;
    int idNumber;

    public: 
    Student( string studentName, int studentId, string studentMajor)
    {
        studentName = name;
        studentId = idNumber;
        studentMajor = major;
    }
 
    Student (string studentName, int studentID)
    {
        studentName = name;
        studentID = idNumber;
        major = " "; 
    }

    Student ()
    {
        name = " ";
        major = " ";
        idNumber = 0;
    }

};

    return 0;
}
    

