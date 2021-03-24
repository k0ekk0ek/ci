#include <stdio.h>

#include "bar.h"

static void foo(void)
{
  printf("foo\n");
}

int main(int argc, char *argv[])
{
  foo();
  bar();
  return 0;
}
