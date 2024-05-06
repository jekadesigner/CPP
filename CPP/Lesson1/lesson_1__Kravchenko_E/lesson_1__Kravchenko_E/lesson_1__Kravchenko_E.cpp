#include <iostream>
#include <iomanip>
#include <string>
/*
int main() {

	int age = 32;

	std::cout << "my age " << age;

}
*/

/*
int main() {

	float sugar = 14.88;

	std::cout << "sugar price " << sugar << " UAH";

}
*/

/*

void main() {

	int a = 10;
	int b = 20;
	std::cout << "side a = " << a << " side b = " << b <<  
		"\narea = " << a * b;

}

*/

///////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////


/*
void main() {

	
	std:: string name;

	std::cout << "What’s your name?\n";
	std::cin >> name ;
	std::cout << "\nHello " << name << " !";

}

*/

/*
void main() {

	int a;
	float b;

	std::cout << "Enter an integer and a real number:\n" <<
		"Enter integer  number ";

	std::cin >> a;
	std::cout << "\nEnter  real number ";
	std::cin >> b;
	std::cout << a << '\n' << b ;


}
*/

/*
void main () {

	

	std::cout <<

		"  |\n" <<
		"  ^\n" <<
		" / \\ \n" <<
		"/ O \\ \n" <<
		"|   | \n" <<
		"|   | \n" <<
		"|   | \n" <<
		"/^|^\\  \n" <<
		" # #\n" <<
		" # #\n" <<
		" # #\n"  ;


}

*/


/*
void main() {



float a;
	float b;

	std::cout << "Enter a real number:\n"
		"Enter a real number a ";
	std::cin >> a;
	std::cout << "\nEnter a real number b ";
	std::cin >> b;
	std::cout << floor(a) << "\t" << floor(b);


/*
	double number1 = 10.1, number2 = 10.9;

	std::cout << "(int)\t" << (int)number1 << "\t" << (int)number2 << std::endl;
	std::cout << "trunc\t" << trunc(number1) << "\t" << trunc(number2) << std::endl;
	std::cout << "round\t" << round(number1) << "\t" << round(number2) << std::endl;
	std::cout << "floor\t" << floor(number1) << "\t" << floor(number2) << std::endl;
	std::cout << "ceil\t" << ceil(number1) << "\t" << ceil(number2) << std::endl;

}

*/

/*

void main() {

	int X , Y;

	std::cout << "enter X and Y\n" << "enter X " ;
	std::cin >> X;
	std::cout << "\nenter Y ";
	std::cin >> Y;


	std::cout << "\n" << X << " + " << Y << " = " << X + Y;

	std::cout << "\n" << X << " - " << Y << " = " << X - Y;

	std::cout << "\n" << X << " * " << Y << " = " << X * Y;

	std::cout << "\n" << X << " / " << Y << " = " << X / Y;

	std::cout << "\n" << X << " % " << Y << " = " << X % Y << "\n";


}


*/

/* 
void main() {


	float x;
	float y;

	std::cout << "enter X ";
	std::cin >> x;

	y = x + (sin(x) / (x + 5)) - 14 * cos(x) + pow(x, 2);

	std::cout << "\n" <<y;


}
*/
/*
void main() {


	float A;
	float B;
	float C;
	float P;

	std::cout << "enter side A ";
	std::cin >> A;

	std::cout << "\nenter side B ";
	std::cin >> B;

	std::cout << "\nenter side C ";
	std::cin >> C;

	P = A + B + C;

	std::cout << "\ntriangle perimeter = " << P << "\n";

}

*/

/*
void main() {


	float A;
	float B;
	float S;

	std::cout << "enter side A ";
	std::cin >> A;

	std::cout << "\nenter side B ";
	std::cin >> B;

	S = A * B;

	std::cout << "\nS = " << S << "\n";

}

*/

/*
void main() {


	double r;
	double L;

	std::cout << "enter radius ";
	std::cin >> r;

	L = r * 2 * 3.141592;

	std::cout << "\n " << L << "\n";

}

*/


void main() {

	float number_A, number_B;

	std::cout << "enter number A ";
	std::cin >> number_A; 

	std::cout << "\nenter number B ";
	std::cin >> number_B;

	std::cout << "\n" << ceil(number_A) << "\n";
	std::cout << "\n" << floor(number_A) << "\n";
	std::cout << "\n" << round(number_A) << "\n" << "\n";

	std::cout << "\n" << ceil(number_B) << "\n";
	std::cout << "\n" << floor(number_B) << "\n";
	std::cout << "\n" << round(number_B) << "\n" << "\n";

}

