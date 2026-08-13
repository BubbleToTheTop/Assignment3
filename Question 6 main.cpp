#include "gradebook.h"
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    // Prompt user to enter their score and grade level.
    int score, gradeLevel;
    cout << "Please enter a score for the benchmark: ";
    cin >> score;
    cout << "Please enter a grade level for the benchmark: ";
    cin >> gradeLevel;
    // Initializing an object of type Gradebook with no name as a benchmark.
    Gradebook benchmark_student("", score, gradeLevel);
    Gradebook student;

    ifstream fin;
    fin.open("Students.txt");
    if (fin.fail()){
        cout << "Something went wrong while opening the input file.";
        exit(1);
    }
    // (1)Checks if current student performed at least as well as benchmark student.
    // (2)Prints the student's name, score and grade level to source(screen/file).
    while (fin >> student){
        if (student >= benchmark_student){
            cout << "===============\n";
            cout << student;
            cout << "===============\n" <<endl;
        }
    }
}
