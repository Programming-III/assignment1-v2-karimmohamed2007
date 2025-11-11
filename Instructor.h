#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;

class Instructor 
    {
 private :
    String department;
    int experienceyears;
 public :
     Instructor (department, experienceyears);
     Instructor ();
     String  getDepartment ();
     int  getExperienceYers ();
    void Instuctor display ();
    };
#endif
