#include <iostream>

int main(int argc, char* argv[])
{
  // suppress warnings
  (void)argc; (void)argv;
  int args;
  std::cout << "Hello World!" << std::endl;
  std::cout << "Enter an integer";
  std::cin >> args;
  while(args--)
  {
    std::cout << "C++ while loop being executed"<<"\n";
  }
  std::cout << "While loop has come to an end. \n";
  return 0;
}
