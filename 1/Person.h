//
// Created by vdubynkyn on 23.11.18.
//

#ifndef CPP_PERSON_H
#define CPP_PERSON_H

#include <string>

using   std::string;

class Person {

private:
	static constexpr size_t LIMIT = 25;
	string                  mLastName; // Person's last name
	char                    mFirstName[LIMIT]; // Person's first name

public:
	Person();
	Person(const string & ln, const char * fn = "Heyyou");

// the following methods display mLastName and mFirstName
	void Show() const; // firstname lastname format
	void FormalShow() const; // lastname, firstname format

};

#endif //CPP_PERSON_H
