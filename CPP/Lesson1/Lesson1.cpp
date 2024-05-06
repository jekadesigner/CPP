#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    //std::cout << "Hello World!\n";
    //std::cout << std::boolalpha;
    //std::cout << "Hello" << 12 << " " << 12.5 << " " << true << std::endl;
    //std::cout << "Hello\nWorld\n" << "Hello\tWorld\n" << "Hello\\World\n" << "Hello\"World\"\n"
        //<< "Hello\aWorld\n";

    /*int number = 10;
    number = 9;

    //int_fast16_t number1 = 33000;
    //std::cout << number1 << std::endl;
    short short_number = 33000;
    std::cout << "Short int: " << short_number << std::endl;

    long long number2;

    unsigned u_number = -1;
    std::cout << "Unsigned int: " << u_number << std::endl;

    char c = '1';

    char str[] = "Hello word";
    std::string str1 = "Hello world";

    bool value = true;
    float f_number = 15.1231231f;
    double d_number = 445.123123123123213;
    std::cout << std::fixed << std::setprecision(10);
    std::cout << "Number: " << d_number << std::endl;
    

    int number;
    std::cout << "Enter number: ";
    std::cin >> number;

    std::cout << "Number: " << number << std::endl;

    std::string str;
    //std::cin >> str;
    std::getline(std::cin, str);
    std::cout << str;
    int x, y;
    std::cout << "Enter x, y: ";
    std::cin >> x >> y;
    std::cout << "x, y: " << x << " " << y << std::endl;

    int number;
    std::cout << "Enter number: ";
    std::cin >> number;

    std::cin.ignore(1, '\n');

    std::string str;
    std::cout << "Enter line: ";
    std::getline(std::cin, str);
    std::cout << str;

    int number1, number2;
    std::cout << "Enter two numbers: ";
    std::cin >> number1 >> number2;*/

    /*std::cout << number1 << " + " << number2 << " = " << number1 + number2 << std::endl;
    std::cout << number1 << " - " << number2 << " = " << number1 - number2 << std::endl;
    std::cout << number1 << " * " << number2 << " = " << number1 * number2 << std::endl;
    std::cout << std::fixed << std::setprecision(10);
    std::cout << number1 << " / " << number2 << " = " << (double)number1 / number2 << std::endl;
    std::cout << number1 << " % " << number2 << " = " << number1 % number2 << std::endl;

    std::cout << number1 << "^" << number2 << " = " << std::pow(number1, number2) << std::endl;
    std::cout << "|" << number1 << "| = " << abs(number1) << std::endl;

    std::cout << "sin(" << number1 << ") = " << sin(number1) << std::endl;
    std::cout << "tg(" << number1 << ") = " << tan(number1) << std::endl;
    std::cout << "ctg(" << number1 << ") = " << cos(number1)/sin(number1) << std::endl;*/

    double number1 = 10.1, number2 = 10.9;

    std::cout << "(int)\t" << (int)number1 << "\t" << (int)number2 << std::endl;
    std::cout << "trunc\t" << trunc(number1) << "\t" << trunc(number2) << std::endl;
    std::cout << "round\t" << round(number1) << "\t" << round(number2) << std::endl;
    std::cout << "floor\t" << floor(number1) << "\t" << floor(number2) << std::endl;
    std::cout << "ceil\t" << ceil(number1) << "\t" << ceil(number2) << std::endl;

    return 0;
}
