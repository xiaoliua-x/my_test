#include<stdio.h>
#include<string.h>
#include<fcntl.h>
#include<unistd.h>
int main () {
  int fd = open("../a.txt", O_RDWR | O_CREAT, 0664);
  if(fd < 0) {
      perror("open call error");
      exit(0);
  }
  
  printf("hello world\n");
  return 0;
}
