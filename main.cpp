# This is the most basic program

#include<iostream>
#include<string>

int main()
{
  std::string user_name = "";
  std::cout << "Enter your name: ";
  std::cin >> user_name;
  std::cout << "Hello, " << user_name << "!" << std::endl;
}
