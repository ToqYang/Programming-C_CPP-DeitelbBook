// Fig. 16.12: GradeBook.cpp
// GradeBook member-function definitions. This file contains
// implementations of the member functions prototyped in GradeBook.h.
#include <iostream>
#include"../headers/GradeBook.h"// include definition of class GradeBook
using namespace std;


// constructor initializes courseName with string supplied as argument
GradeBook::GradeBook( string name, string instructor )
  : courseName( name ), instructor_name( instructor )
{
  // member initializer to initialize courseName
  // empty body
} // end GradeBook constructor


// function to set the course name
void GradeBook::setCourseName( string name, string instructor )
{
  courseName = name; // store the course name in the object
  instructor_name = instructor;
} // end function setCourseName


// function to get the course name
string GradeBook::getCourseName() const
{
  return courseName; // return object's courseName
} // end function getCourseName


// function to get the course name
string GradeBook::getCourseInstructor() const
{
  return instructor_name; // return object's courseName
} // end function getCourseName


// display a welcome message to the GradeBook user
void GradeBook::displayMessage() const
{
  // call getCourseName to get the courseName
  cout << "Welcome to the grade book for\n" << getCourseName() << "!"
      << "\nInstructor: " << getCourseInstructor() << endl;
} // end function displayMessage
