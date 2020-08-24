#include <iostream>
// include definition of class GradeBook
#include"headers/GradeBook.h"


/**
 * main - (Modifying Class GradeBook)
 *
 * Return: (int) 0 If is success
 */
int main(void)
{
  // create two GradeBook objects
  GradeBook gradeBook1("CS101 Introduction to C++ Programming", "Brian");
  GradeBook gradeBook2("CS102 Data Structures in C++", "Santiago");

  // display initial value of courseName for each GradeBook
  gradeBook1.displayMessage();
  std::cout << std::endl;
  gradeBook2.displayMessage();

  return 0;
}
// end main
