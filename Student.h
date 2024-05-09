#pragma once
#include <string>
using namespace std; 
class Student
{
	// Data 
private: 
	float gpa;
	string name; 
	string major;
	string accessId;
	//string email;

	// Operations (functions)
public: 
	void printStudentInfo();
	bool changeMajor(string newMajor);
	float calcGPA();

	// setters and getters 
	// setter: function that is used to change the value of a data field 
	// getter: function that is used to get the value of a data field 

	void setName(string n); 
	// setters are written like: void setData (datatype of data)

	string getName(); 
	// getters are written like: datatype of data getData (); 

	void setMajor(string m);
	string getMajor(); 

	void setGPA(float g);
	float getGPA();

	void setAccessID(string a);
	string getAccessID();


};

