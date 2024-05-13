

#include <iostream>


/*
void main()
{

    int age;

    
    std::cout << "enter age \n";
    std::cin >> age;

    if (age >= 12) {


        std::cout << "Access \n";
    }
    else
    {
        std::cout << "Deny \n";

    }

}


*/


void main() {

    while (1)
    {
        int age, money;

        std::cout << "Enter your age \n";
        std::cin >> age;

        std::cout << "Enter your money \n";
        std::cin >> money;

        if (age >= 18 && money >= 50) {

            std::cout << "Can buy \n";

        }
        else
        {
            std::cout << "Can not buy \n";


        }

        std::cout << "\n";
        std::cout << "\n";
    }

   

}



/*
void main () {

    int  money_1 , money_2;

    std::cout << "Enter your money_1 \n";
    std::cin >> money_1;

    std::cout << "Enter your money_2 \n";
    std::cin >> money_2;


    if (money_1 >= 81 || money_2 >= 81) {

        std::cout << "Can  buy \n";


    }

    else
    {


        std::cout << "Can not buy \n";
    }






}

*/

/*
void main() {

    float a, b, c, sum;

    std::cout << "Enter a \n";
    std::cin >> a;

    std::cout << "Enter b \n";
    std::cin >> b;

    std::cout << "Enter c \n";
    std::cin >> c;

    if (a + b > c && b + c > a && c + a > b) {

        std::cout << "It is a triangle!  \n";

    }
    else
    {

        std::cout << "It is not a triangle!”   \n";


    }



}

*/

/*
void main() {

    float number;

    std::cout << "Enter number \n";
    std::cin >> number;

    if (number > 0) {

        std::cout << "X is positive!\n";
    }

    if (number == 0) {

        std::cout << "X is zero!\n";
    }

    if (number < 0) {

        std::cout << "X is negative!\n";
    }

}

*/

/*

void main() {

    int num;

    std::cout << "enter number  \n";

    std::cin >> num;

    switch (num)
    {
    case 1:
        std::cout << " yan \n";
        break;

    case 2:
        std::cout << " feb \n";
        break;

    case 3:
        std::cout << " mar \n";
        break;

    case 4:
        std::cout << " apr \n";
        break;

    case 5:
        std::cout << " May \n";
        break;

    case 6:
        std::cout << " yun \n";
        break;

    case 7:
        std::cout << " yul \n";
        break;

    case 8:
        std::cout << " aug \n";
        break;

    case 9:
        std::cout << " sept \n";
        break;

    case 10:
        std::cout << " nov \n";
        break;

    case 11:
        std::cout << " dec \n";

    case 12:
        std::cout << " December \n";
        break;



        
    default:

        std::cout << " There is no such month! \n";

        break;
    }



}

*/




