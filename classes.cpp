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
    void setCourseName( string name )
    {
        courseName = name;
    }

    string getCourseName()
    {
        return courseName;
    }
    // function that displays welcome message
    void displayMessage()
    {
        cout << "Welcome to grade book" << endl;
    }
private:
        string courseName;
};

int main()
{
    string nameOfCourse;
    GradeBook myGradeBook;

    cout << "Please enter the course name:" << endl;
    getline( cin, nameOfCourse );
    cout << endl;

    myGradeBook.setCourseName( nameOfCourse );
    string displayCourse = myGradeBook.getCourseName();
    cout << displayCourse << endl;
    return 0;
}
