#pragma once
#include <string>
#include "Date.h"
#include <vector>
#include "Groups.h"

using namespace std;

struct Person {
	string firstName;
	string lastName;
	Date dateOfBirth;
	vector<string> emails;
	vector<Group> groups;
};

