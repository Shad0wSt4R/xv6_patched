#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{
  printf(1,"There were a total of %d calls to read system.\n",getreadcount());
  exit();
}
