#include "types.h"
#include "user.h"
#include "stat.h"

int main(int argc, char *argv[]) {
  char buffer[5];
  strcpy(buffer, argv[1]);
  printf(1, "buffer content= %s\n", buffer);
  return 0;
}
