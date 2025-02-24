#include "OutputSolution.h"
#include "CheckSolution.h"
#include "Solution.h"
#include <iostream>

OutputSolution::OutputSolution(int example, int numRows, string s, string expected) : 
	example(example), numRows(numRows), s(s), expected(expected){}

void OutputSolution::run(){
	Solution solution;
	result = solution.convert(s, numRows);
}

void OutputSolution::print(){

	cout << " ============ Тест " << example << " ============ " << endl;
	cout << " Строка: " << s << endl;
	cout << " Количество строк: " << numRows << endl;
	cout << " Ожидаемый результат: " << expected << endl;
	run();
	cout << " Полученный результат: " << result << endl;
	cout << " ============ Проверка ============" << endl;
	CheckSolution check;
	(check.check(expected, result)) ? cout << " Тест пройден" << endl : cout << " Тест не пройден" << endl;
	cout << " ==================================\n" << endl;
}

