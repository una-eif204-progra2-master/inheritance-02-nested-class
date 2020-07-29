/*
 * =====================================================================================
 *
 *       Filename:  Inheritance03NestedClass.cpp
 *
 *    Description:  Inheritance Nested Classes
 *
 *        Created:  26/07/2020
 *
 *         Author:  Maikol Guzmán mike@guzmanalan.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#include <iostream>  // allows program to output data to the screen

class TestClass {
  int number = 0;

public:
  struct NestedClass {
    static int get_private_number(const TestClass &test_class) {
      return test_class.number;
    }
  };
};

int main()
{
  std::cout << "Welcome to the UNA!" << std::endl;  // display message

  TestClass test_class;
  return TestClass::NestedClass::get_private_number(test_class);
}
