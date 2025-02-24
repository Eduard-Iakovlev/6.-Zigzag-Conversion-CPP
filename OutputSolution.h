#pragma once
#include <string>

using namespace std;

class OutputSolution{
public:
	OutputSolution() = default;
	OutputSolution(int example, int numRows, string s, string expected);

	void print();
private:
	int example, numRows;
	string s, expected, result;
	void run();
};

