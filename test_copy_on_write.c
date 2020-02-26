#include "user.h"

int main(void) {
  int val = 0;
  int pid;
  pid = fork();
  if(pid == 0) {
    printf("Number of free pages in child: %d\n", getNumberOfFreePages());
    val = 1;
    printf("Number of free pages in child after changing variable: %d\n", getNumberOfFreePages());
  } else {
    printf("Number of free pages in parent: %d\n", getNumberOfFreePages());
    wait();
  }
  exit();
}
