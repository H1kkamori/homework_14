#include <iostream>
#include <string>

int main() 
{
    // �������� � ������������� ���������� ���� std::string
    std::string myString = "Hello, World!";

    // ����� ������
    std::cout << "String: " << myString << std::endl;

    // ����� ����� ������
    std::cout << "String length: " << myString.length() << std::endl;

    // ����� ������� �������
    std::cout << "First character: " << myString[0] << std::endl;

    // ����� ���������� �������
    std::cout << "Last character: " << myString[myString.length() - 1] << std::endl;

    return 0;
}
