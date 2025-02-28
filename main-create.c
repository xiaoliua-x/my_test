#include<stdio.h>
#include<string.h>
#include<fcntl.h>
#include<unistd.h>
int main () {
  open("../a.txt", O_RDWR | O_CREAT, 0664);
  printf("hello world\n");
  return 0;
}
