// Gradebook class definition. This file presents GradeBook's public
// interface without revealing the implementations of GradeBook's member
// functions, which are defined in GradeBook.cpp

#include <string>
using std::string;

// Gradebook class definition
class GradeBook
{
public:
    GradeBook( string );
    void setCourseName( string );
    string getCourseName();
    void displayMessage();
private:
    string courseName;
};
