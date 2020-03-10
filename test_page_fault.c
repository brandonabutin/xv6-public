#include "types.h"
#include "stat.h"
#include "user.h"

int main(void) {
  int i = 0;
  printf(1, "%d\n", *(&x + 4097));
  exit();
}
