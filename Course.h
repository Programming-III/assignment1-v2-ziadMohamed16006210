#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
//#write your code here
class course{
    private:
      string courseCode;
      string courseName;
      int maxStudent;
      Student* students;
      int currentStudents;
      public:
        course(){};
        course( string courseCode,tring courseName,int maxStudent,int currentStudents){};
        addStudent(const Student& s){};
        displayCourseInfo(){};
        
}#endif;













#endif
