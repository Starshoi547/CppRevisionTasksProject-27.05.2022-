/*	Задание 02. Упорядочивание чисел (Ordering Numbers)
*
*	Даны три числа. Упорядочите их в порядке неубывания.
*
*	Формат входных данных [input]
*	Функция принимает три числа.
*
*	Формат выходных данных
*	Функция должна возвратить в виде строки три числа, которые упорядочены в порядке неубывания.
*	Числа в строке должны быть разделены друг от друга одним пробелом
*
*	[Sample function input 1]: 7 6 1
*	[Sample function output 1]: 1 6 7
*
*	[Sample function input 2]: 6 7 2
*	[Sample function output 2]: 2 6 7
*
*	[Sample function input 3]: 7 4 7
*	[Sample function output 3]: 4 7 7
*/

#include "Tasks.h"

string task02(int a, int b, int c) {
	string message = "";
	if (a >= b && b > c) {
		message = to_string(c) + " " + to_string(b) + " " + to_string(a);
		//cout << to_string(c) + " " + to_string(b) + " " + to_string(a) << endl;
	}
	else if (a >= c && c > b) {
		message = to_string(b) + " " + to_string(c) + " " + to_string(a);
		//cout << to_string(b) + " " + to_string(c) + " " + to_string(a) << endl;
	}
	else if (b >= a && a > c) {
		message = to_string(c) + " " + to_string(a) + " " + to_string(b);
		//cout << to_string(c) + " " + to_string(a) + " " + to_string(b) << endl;
	}
	else if (b >= c && c > a) {
		message = to_string(a) + " " + to_string(c) + " " + to_string(b);
		//cout << to_string(a) + " " + to_string(c) + " " + to_string(b) << endl;
	}
	else if (c >= b && b > a) {
		message = to_string(a) + " " + to_string(b) + " " + to_string(c);
		//cout << to_string(a) + " " + to_string(b) + " " + to_string(c) << endl;
	}
	else if (c >= a && a > b) {
		message = to_string(b) + " " + to_string(a) + " " + to_string(c);
		//cout << to_string(b) + " " + to_string(a) + " " + to_string(c) << endl;
	}
	else {
		message = to_string(a) + " " + to_string(b) + " " + to_string(c);
		//cout << to_string(a) + " " + to_string(b) + " " + to_string(c) << endl;
	}
	
	
	
	//cout << (a != b && b != c ? (a > b && b > c ? to_string(c) + " " + to_string(b) + " " + to_string(a) : (a < b  && a > c ? to_string(c) + " " + to_string(a) + " " + to_string(b) : (a > c > b ? to_string(b) + " " + to_string(c) + " " + to_string(a) : (a < b && b >= c ? to_string(a) + " " + to_string(b) + " " + to_string(c) : to_string(c) + " " + to_string(b) + " " + to_string(a))))) : /*to_string(a) + " " + to_string(b) + " " + to_string(c)*/ to_string(0)) << endl;
	return message;
}