#include <iostream>

int main()
{
    /*const float MAX_WEIGHT = 1000;
    const int MAX_FLOORS = 9;
    float weight;
    int floor_number;
    std::cout << "Enter weight of smth and number of current number: ";
    std::cin >> weight >> floor_number;
    //<, <=, >, >=, ==, !=
    //&&, ||
    if (weight < MAX_WEIGHT && floor_number < MAX_FLOORS) {
        std::cout << "Lift can up\n";
    }
    else {
        std::cout << "Lift can't up\n";
    }

    std::string who;
    std::cout << "Who are you?\n";
    std::cin >> who;

    if (who == "teacher" || who == "duty") {
        std::cout << "Can go\n";
    }
    else {
        std::cout << "Can't go\n";
    }

    std::string name;
    int age;
    std::cout << "Enter child name and age: ";
    std::cin >> name >> age;

    if (age < 3) {
        std::cout << name << " stays at home\n";
    }
    else if(age < 6)
    {
        std::cout << name << " goes to kindergarden\n";
    }
    else if (age < 17)
    {
        std::cout << name << " goes to school\n";
    }
    else if (age < 23)
    {
        std::cout << name << " goes to univercity\n";
    }
    else {
        std::cout << name << " is adult\n";
    }*/

    int day_number;
    std::cout << "Enter number of day: ";
    std::cin >> day_number;

    switch (day_number)
    {
    case 8:
    case 16:
    case 1: {
        std::cout << "Mon\n";
    }
    break;
    case 2: {
        std::cout << "Tue\n";
    } 
    break;
    default: {
        std::cout << "Incorrect number!\n";
    }

    }

    return 0;
}
