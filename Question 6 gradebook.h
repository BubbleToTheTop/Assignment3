#ifndef GRADEBOOK_H_INCLUDED
#define GRADEBOOK_H_INCLUDED
#include <string>
#include <iostream>
using namespace std;

class Gradebook
{
public:
    // Default constructor.
    Gradebook();
    // Overloaded constructor.
    Gradebook(string name, int score, int grade);
    // Destructor.
    ~Gradebook();

    int get_score() const;
    // Friend functions to overload >=, >>, << to work with objects of type Gradebook.
    friend bool operator>=(const Gradebook& student1, const Gradebook& student2);
    friend istream& operator >>(istream& source, Gradebook& object);
    friend ostream& operator <<(ostream& source, const Gradebook& object);
private:
    string studentName;
    int score;
    int gradeLevel;
};


#endif // GRADEBOOK_H_INCLUDED
