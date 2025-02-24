#pragma once
#include <string>

using namespace std;

class CheckSolution{
public:
	CheckSolution() = default;
	
	bool check(string expected, string result);
};

