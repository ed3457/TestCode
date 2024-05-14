// TestCode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Student.h"
using namespace std; 
int main()
{
    //cout << "Hello World!\n";

    // create a number of objects 

    Student student1; // object of type: Student 
    Student student2;

    student1.setAccessID("AB1234");
    student1.setGPA(3.0);
    student1.setMajor("English");
    student1.setName("Steve Jobs");

    student1.printStudentInfo();

    cout << "----------------------------\n";
    
    student2.printStudentInfo();

}


