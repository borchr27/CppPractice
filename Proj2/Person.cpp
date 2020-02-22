#include "Person.hpp"
// This is the implementation file it includes the specifications

// Default values
Person::Person()
{
    firstName = "FNU";
    lastName = "LNU";
    age = -1;
    employed = false;
    student = false;
}

// Constructor
Person::Person(string f, string l, int a, bool e, bool s)
{
    firstName = f;
    lastName =l;
    employed = e;
    student = s;
    if (a < 0) 
    {
        age = -1;
    }
    else
    {
        age = a;
    }  
}


int Person::getAge()
{
    return age;
}


void Person::setAge(int a)
{
    age = a;
}


void Person::setEmployed(bool e)
{
    employed = e;
}

bool Person::isEmployed()
{
    return employed;
}

void Person::setStudent(bool s)
{
    student = s;
}

bool Person::isStudent()
{
    return student;
}


void Person::print()
{
    cout << "First name: " << firstName << endl;
    cout << "Last name: " << lastName << endl;
    if (age == -1) {
        cout << "Age: unknown" << endl;
    } else {
        cout << "Age (in years): " << age << endl;
    }
    if (employed) {
        cout << "Employed?: Yes" << endl;
    } else {
        cout << "Employed?: No" << endl;
    }
    if (student) {
        cout << "Student?: Yes" << endl;
    } else {
        cout << "Student?: No" << endl;
    }

}


void Person::setFirstName(string f)
{
    firstName = f;
}

string Person::getFirstName()
{
    return firstName;
}


void Person::setLastName(string l)
{
    firstName = l;
}

string Person::getLastName()
{
    return lastName;
}


void Person::setName(string f, string l)
{
    firstName = f;
    lastName = l;
}

string Person::getName()
{
    return (firstName + " " + lastName); 
}