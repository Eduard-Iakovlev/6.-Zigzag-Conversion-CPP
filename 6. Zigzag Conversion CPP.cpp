#include <iostream>
#include <string>
#include "OutputSolution.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	int example = 0;
	int numRows;
	string s, expected;

	OutputSolution outputSolution;

	example++;
	numRows = 3;
	s = "PAYPALISHIRING";
	expected = "PAHNAPLSIIGYIR";
	outputSolution = OutputSolution(example, numRows, s, expected);
	outputSolution.print();

	example++;
	numRows = 4;
	s = "PAYPALISHIRING";
	expected = "PINALSIGYAHRPI";
	outputSolution = OutputSolution(example, numRows, s, expected);
	outputSolution.print();

}
