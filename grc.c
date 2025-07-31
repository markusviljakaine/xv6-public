#include "types.h"
#include "stat.h"
#include "user.h"

int main(void)
{
  int count = getreadcount(); // Calling the new syscall
  printf(1, "read() has been called %d times\n", count); // Print the ressult to user
  exit();
}
