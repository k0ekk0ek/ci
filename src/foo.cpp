#include <iostream>

#include "bar.hpp"
#include "baz.h"

static void foo(void)
{
  std::cout << "foo" << std::endl;
}

int main()
{
  foo();
  bar();
  return 0;
}
