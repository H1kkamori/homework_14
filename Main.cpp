#include <iostream>
#include <string>

int main() 
{
    // Создание и инициализация переменной типа std::string
    std::string myString = "Hello, World!";

    // Вывод строки
    std::cout << "String: " << myString << std::endl;

    // Вывод длины строки
    std::cout << "String length: " << myString.length() << std::endl;

    // Вывод первого символа
    std::cout << "First character: " << myString[0] << std::endl;

    // Вывод последнего символа
    std::cout << "Last character: " << myString[myString.length() - 1] << std::endl;

    return 0;
}
