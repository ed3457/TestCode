#include "Student.h"

void Student::setName(string n)
{   // usually, we do some validation here 
	name = n;

}

string Student::getName()
{
	return name; 

}

void Student::setMajor(string m)
{
	major = m;

}

string Student::getMajor()
{
	return major;

}

void Student::setAccessID(string a)
{
	accessId = a;
}

string Student::getAccessID()
{
	return accessId;
}

void Student::setGPA(float g)
{
	gpa = g;

}

float Student::getGPA()
{
	return gpa;
}

