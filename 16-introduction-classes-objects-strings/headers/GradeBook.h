// GradeBook class definition. This file presents GradeBook's public
// interface without revealing the implementations of GradeBook's member
// functions, which are defined in GradeBook.cpp.
#include <string> // class GradeBook uses C++ standard string class

// GradeBook class definition
class GradeBook
{
  public:
    /* constructor initialize courseName
       B) Modify the constructor to specify course name
      and instructor name parameters. */
    explicit GradeBook( std::string, std::string );
    /*  sets the course name
        B)  Provide a set function to change the instructor’s name
        and a get function to retrieve it. */
    void setCourseName( std::string, std::string );
    // gets the course name
    std::string getCourseName() const;
    std::string getCourseInstructor() const;
    // displays a welcome message
    void displayMessage() const;
  private:
    // course name for this
     std::string courseName;

     /* A) Include a second string data member
        that represents the course instructor’s name. */
     std::string instructor_name;
}; // end class GradeBook