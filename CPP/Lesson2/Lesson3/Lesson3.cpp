#include <iostream>
#include <string>

int main()
{
    /*
    int number = 0;

    while (number > 0) {
        std::cout << number << std::endl;
        //number = number / 2;
        //+=, -=, *=, /=, %=

        number /= 2;
    }

    number = 0;
    do {
        std::cout << number << std::endl;
        number /= 2;
    } while (number > 0);*/

    /*std::string line;

    while (line != "") {
        std::getline(std::cin, line);
        std::cout << line << "\n";
    }

    do {
        std::getline(std::cin, line);
        std::cout << line << "\n";
    } while (line != "");

    int count = 0;
    while (count < 10) {
        std::cout << "Hello world!\n";
        //++, --
        count++;

    }

    for (int i = 0; i < 10; i++) {
        std::cout << "Hello world!\n";
    }*/
    //20.4 == 20.400000000000001
    // abs(20.4 - 20.400000000000001) < 0.00001
    /*for (double i = 10.5; i <= 20.4; i += 0.1) {
        std::cout << i << ". Hello world!\n";
    }
    

    for (int i = 9; i >= 0; i--) {
        std::cout << i <<  ". Hello world!\n";
    }
    int number;
    std::cout << "Enter number: ";
    std::cin >> number;

    for (int i = 1; i < number; i++) {
        if(i % 2 != 0)
            std::cout << i << " ";
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            std::cout << "#";
        }
        std::cout << "\n";
    }

    for (int i = 1; i < 20; i++) {
        if (i % 5 == 0) {
            continue;
        }
        if (i % 13 == 0) {
            break;
        }
        std::cout << i << " ";
    }*/
    //int arr[5];
    //std::cout << arr[0] << std::endl;
    //int arr[5] = {1, 2, 3};
    const int MAX_SIZE = 100;

    int size;
    std::cout << "Enter size: ";
    std::cin >> size;
    if (size > MAX_SIZE) {
        std::cerr << "Size too big\n";
        return 1;
    }

    int arr[MAX_SIZE] = {};

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
