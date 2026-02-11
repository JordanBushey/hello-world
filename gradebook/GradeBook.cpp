// GradeBook member-function definitions. This file contains the implementations
// of the member functions prototyped in GradeBook.h
#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"

// constructor initializes courseName with string supplied as argument
GradeBook::GradeBook( string name )
{
    setCourseName( name );
}

// function to set course name
void GradeBook::setCourseName( string name )
{
    courseName = name;
}

string GradeBook::getCourseName()
{
    return courseName;
}

void GradeBook::displayMessage()
{
    cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
}
