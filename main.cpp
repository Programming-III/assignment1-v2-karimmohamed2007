#include <iostream>
#include <string>
#include "person.h"
#include "student.h"
#include "instructor.h"
#include "course.h"
using namespace std;

class Person
{
private:
    string name;
    int id;
public:
    Person (name , id)
    {
       this -> name= name;
        this ->id=id;
    }
    person ()
    {
        name="";
        id=0;
    }
    int Person:: getId ()
    {
        return id;
    }
    int Person :: getName ()
    {
        return name;
    }
    void Person:: display()
    {
        cout << "name"<< name << "id"<< id <<endl;
    }
};
class Student: public Person
{
private:
    int yearLevel;
    string major ;
public:
    Student (yearLevel, major)
    {
        this -> yearLevel=yearLevel;
        this ->major=major ;
    }
    Student ()
    {
        yearLevel=0;
        major="";
    }
    int Student:: getYearLevel(){return yearLevel;}
    int Student :: getMajor() {return major;}
    void Student:: display ()
    {
        cout << "yearLevel:"<< yearLevel << "major:"<< major<endl;
    }
};
    class Instructor :: public Person
    {
 private :
    String department;
    int experienceyears;
 public :
     Instructor (department, experienceyears)
     {
         this ->department=department;
         this ->experienceyears=experienceyears;
     }
     Instructor ()
     {
         department="";
         experienceyears=0;
     }
     String Instructor getDepartment ()
     {
         return department;
     }
     int Instructor getExperienceYers (){
     return experienceyears;}
    void Instuctor display ()
    {
        cout << department << experienceyears;
    }
    };
class Course
{
private:
    string coursecode;
    string coursename;
    int maxstudents;
    Student* student;
    int currentstudents;
public:
    Course (coursecode, coursename , maxstudents, currentstudents, student)
    {
        this ->coursecode=coursecode;
        this ->coursename=coursename ;
        this ->maxstudents=maxstudets;
        this->currentstudents=currentstudents;
        this -> student= student;
    }
    Course ()
    {
        coursecode="";
        coursename="" ;
        maxstudents=0;
        currentstudents=0;
        student= nullptr;
    }
            string Course:: getCoursecode () {return coursecode;}
            string Course :: getCoursename () {return coursename;}
            int Course :: getMaxStudent () {return maxstudents;}
int Course :: getCurrentStudents (return currentstudents;)
    void Course:: displayinfo ()
    {
        cout << coursecode << coursename << maxstudents < student << currentstudents<<endl;
    }
    int Course:: addStudent (const Student&s)
    {
        if (students>maxstudents)
            {
            students +=1;
        }
    }
};



int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
