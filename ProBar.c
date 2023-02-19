#include "ProBar.h"

void process_bar()
{
  char bar[NUM]; 
  
  const char *lable="|/-\\";
  int i =0;
  while(i<=100)
{
     printf("[%-100s][%d%%][%c]\r",bar,i,lable[i%4]);
     fflush(stdout);
     bar[i++]='#';
    usleep(10001);
}
  printf("\n");
}
