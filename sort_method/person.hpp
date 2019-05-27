#ifndef Person_H
#define Person_H


#include <string>
#include <iostream>

using namespace std;

class Person
{
private:
	string name;
	int year;
public:	
	string getName() {return name; }
	int getYear() {return year; }
	Person(string name, int year): name(name), year(year) {}
};
#endif