#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{
  printf(1, "There have been %d system calls since boot-up\n", getreadcount());
  exit();
}
