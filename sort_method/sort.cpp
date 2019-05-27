#include "person.hpp"
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

static bool myfunction(Person& a, Person& b){
	return a.getYear() < b.getYear();
}

int main(int argc, char const *argv[])
{
		
	vector<Person> myvector {{"Mary",31},{"John",10},{"Peter",112},{"Jennifer",1}};


	sort(myvector.begin(), myvector.end(), myfunction); 

	cout << "myvector contains:";

   for ( auto& person : myvector)
   	   cout << ' ' << '(' << person.getName() << ',' << person.getYear() << ')';
	return 0;
}