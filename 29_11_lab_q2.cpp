/*
Create a class person for maintaining the details of persons related to a institute.
Create derived class to maintain details of student or faculty.
write functions to insert the data and display the data.
*/

#include <iostream>
using namespace std;

class Person
{
protected:
  string name;
  int age;

public:
  void insertData()
  {
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Age: ";
    cin >> age;
  }

  void displayData()
  {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
  }
};

class Student : public Person
{
private:
  int roll;
  string course;

public:
  void insertData()
  {
    cout << "\n--- Enter Student Details ---\n";
    Person::insertData(); // Call base class function
    cout << "Enter Roll Number: ";
    cin >> roll;
    cout << "Enter Course: ";
    cin >> course;
  }

  void displayData()
  {
    cout << "\n--- Student Details ---\n";
    Person::displayData(); // Call base class function
    cout << "Roll Number: " << roll << endl;
    cout << "Course: " << course << endl;
  }
};

class Faculty : public Person
{
private:
  int empId;
  string department;

public:
  void insertData()
  {
    cout << "\n--- Enter Faculty Details ---\n";
    Person::insertData();
    cout << "Enter Employee ID: ";
    cin >> empId;
    cout << "Enter Department: ";
    cin >> department;
  }

  void displayData()
  {
    cout << "\n--- Faculty Details ---\n";
    Person::displayData();
    cout << "Employee ID: " << empId << endl;
    cout << "Department: " << department << endl;
  }
};

int main()
{
  Student s;
  Faculty f;

  s.insertData();
  f.insertData();

  s.displayData();
  f.displayData();

  return 0;
}