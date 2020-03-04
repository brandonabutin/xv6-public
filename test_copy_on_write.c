#include "types.h"
#include "user.h"
#include "stat.h"

int val = 0;

int main(void) {
  int pid;
  pid = fork();
  if(pid == 0) {
    printf(1, "Number of free pages in child: %d\n", getNumberOfFreePages());
    val = 1;
    printf(1, "number of free pages in child after changing: %d\n", getNumberOfFreePages());
  } else {
    wait();
    pid = fork();
    if(pid == 0) {
      printf(1, "Number of free pages in child2: %d\n", getNumberOfFreePages());
      val = 1;
      printf(1, "Number of free pages in child 2 after changing: %d\n", getNumberOfFreePages());    
    } else {
      printf(1, "Number of free pages in parent: %d\n", getNumberOfFreePages());
      wait();
    }
  }
  exit();
}
