#include "gradebook.h"

using namespace std;
// Overload the extraction operator to work for Gradebook objects.
istream& operator >>(istream& source, Gradebook& object)
{
    // '>>' skips for white spaces. Storing values from source(file) inside member variables.
    source >> object.studentName >> object.score >> object.gradeLevel;
    return source;
}
// Overload the insertion operator to work for Gradebook objects.
ostream& operator <<(ostream& source, const Gradebook& object)
{
    // Prints name, score and grade level to the chosen source(screen/file).
    source << "Name: " << object.studentName << "\nScore: " << object.score << "\nGrade Level: " << object.gradeLevel <<endl;
    return source;
}
// Overload >= operator to work for Gradebook objects.
bool operator >=(const Gradebook& student1, const Gradebook& student2)
{
    // If student1's score and grade level is greater or equal to student2, returns true.
    if (student1.score >= student2.score && student1.gradeLevel >= student2.gradeLevel){
        return true;
    }
    else{
        return false;
    }
}
// Returns an object's score.
// Not used in this program.
int Gradebook::get_score() const
{
    return score;
}
// Initializes an object of type Gradebook with no name and value of zero for member variables.
Gradebook::Gradebook() : studentName(""), score(0), gradeLevel(0)
{

}
// Initializes object of type Gradebook with values provided in arguments.
Gradebook::Gradebook(string name, int score, int grade) : studentName(name), score(score), gradeLevel(grade)
{

}
// Destructor.
Gradebook::~Gradebook()
{
    // Does nothing
}
