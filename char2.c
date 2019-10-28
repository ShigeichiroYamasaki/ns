#include <stdio.h>
int main(){
  char *aisatu;
  char *greeting;
  aisatu="hello";
  greeting=aisatu;
  printf("%s\n",greeting);
  printf("%p\n",&greeting);
  return 0;
}

