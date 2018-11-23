//
// Created by vdubynkyn on 23.11.18.
//

#include "golf.h"

#include <iostream>
#include <string.h>
#include <string>

void setGolf(golf& g, const char* name, int hc) {

	strncpy(g.fullname, name, Len);
	g.fullname[Len - 1] = '\0';
	g.handicap = hc;
}

int setGolf(golf& g) {

	std::cout << "Enter the name: ";

	std::string name;
	std::cin >> name;

	std::cout << "Enter the handicap: ";

	int         handicap;
	std::cin >> handicap;


	setGolf(g, name.c_str(), handicap);

	if (name.empty())
		return 0;
	return 1;
}

void handicap(golf & g, int hc) {

	g.handicap = hc;
}

void showGolf(const golf& g) {

	std::cout << "Name: " << g.fullname << std::endl;
	std::cout << "Handicap: " << g.handicap << std::endl;
}
