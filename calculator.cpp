#include <iostream>
using namespace std;

int main() {

int a = 0;
int b = 0;
char c;

	cout << "What you want do? * , / , + , - : \t";

		cin >> c;

	cout << "Inster a number when you want to count: \n";
	cin >> a >> b;



switch (c){

	{
	default:
		cout << "What you write? ";
		break;
}

	case '*':
		cout << a << "*" <<  b << "=" << a * b << endl;
		break;
	case '/':
		cout << a / b;
		break;
	case '+':
		cout << a + b;
		break;
	case '-':
		cout << a - b;
		break;

		return 0;
}

}
