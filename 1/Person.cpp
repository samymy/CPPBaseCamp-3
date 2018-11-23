//
// Created by vdubynkyn on 23.11.18.
//

#include "Person.h"

#include <string.h>
#include <iostream>

Person::Person() {

	mLastName = "";
	mFirstName[0] = '\0';
}

Person::Person(const string & ln, const char * fn) {

	mLastName = ln;
	strncpy(mFirstName, fn, LIMIT);
	mFirstName[LIMIT - 1] = '\0';
}

void Person::Show() const {

	std::cout << mFirstName << " " << mLastName << std::endl;
}

void Person::FormalShow() const {

	std::cout << mLastName << ", " << mFirstName << std::endl;
}
