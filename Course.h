#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
class Course
{
private:
    string coursecode;
    string coursename;
    int maxstudents;
    Student* student;
    int currentstudents;
public:
    Course (coursecode, coursename , maxstudents, currentstudents, student);
   
    Course ();
            string getCoursecode () ;
            string getCoursename () ;
            int Course {};
int getCurrentStudents ();
    void Course:: displayinfo () ;
    int addStudent (const Student&s);
};

#endif
