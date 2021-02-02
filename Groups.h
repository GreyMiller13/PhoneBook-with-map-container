#pragma once
#include <iostream>

using namespace std;

enum EGroup {
	Friendrs, Family, Other
};

struct Group {
	EGroup name;

	Group() {}
	Group(EGroup group) {
		name = group;
	}

	string toString() {
		switch (name)
		{
		case Friendrs:
			return "Friends";
		case Family:
			return "Family";
		case Other:
			return "Other";
		}
	}
};