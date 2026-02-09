// My introduction to C++ classes and functions

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string> // Program uses C++ standard string class
using std::string;
using std::getline;

// Gradebook class definition
class GradeBook
{
public:
    // function that displays welcome message
    void displayMessage( string courseName )
    {
        cout << "Welcome to grade book for\n" << courseName << "!" << endl;
    }
};

int main()
{
    string nameOfCourse;
    GradeBook myGradeBook;

    cout << "Please enter the course name:" << endl;
    getline( cin, nameOfCourse );
    cout << endl;

    myGradeBook.displayMessage( nameOfCourse );
    return 0;
}
