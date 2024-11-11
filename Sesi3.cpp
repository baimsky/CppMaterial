//1. While Loop
//while (condition)
//{
//	statement;
//}

//#include <iostream>
//using namespace std;
//int main() {
//	int a = 10;
//
//	while (a < 20) {
//		cout << "value of a: " << a << endl;
//		a++;
//	}
//	return 0;
//}

//2. if statement
//if (boolean_expression)
//{
//	statement (if the value is true);
//}

//#include <iostream>
//using namespace std;
//int main() {
//	int a = 10;
//
//	if (a < 20) {
//		cout << "a is less than 20 " << endl;
//	}
//	cout << "value of a is: " << a ;
//	return 0;
//}

//3. if...else statement
//if (boolean_expression) {
//	statement (if the expression is true);
//}
//else {
//	statement (if the value is false);
//}

#include <iostream>
using namespace std;
int main() {
	int a = 100;

	if (a < 20) {
		cout << "a is less than 20 " << endl;
	} else {
		cout << "a is not less than 20 " << endl;
	}
	cout << "value of a is: " << a;
	return 0;
}