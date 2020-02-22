#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;

// This is the header file it contains the class specification
// This could be a struct as well as a class, struct would just caputre data!
// Classes have functions, structs dont, stucts cant be public or private or protected
// Put constructor in class, private stuff only accessed by functions in class

class Person
{
public:
    // Constructors
    Person();
    Person(string f, string l, int a, bool e, bool s);

    // Data, Accessors
    void print();
    void setAge(int a);
    int getAge();
    void setFirstName(string f);
    void setLastName(string l);
    void setName(string f, string l);
    void setEmployed(bool e);
    bool isEmployed();
    void setStudent(bool s);
    bool isStudent();
    string getFirstName();
    string getLastName();
    string getName();

private:
    string firstName;
    string lastName;
    int age;
    bool employed;
    bool student;

protected:
};


#endif