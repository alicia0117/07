extern int all_files;
void sub(void)
{
     all_files = 10;
     }

#include <stdio.h>
#include <stdlib.h>
int all_files; 

extern void sub();

int main(void){
       sub();
       printf("%d\n", all_files);
       system ("PAUSE");
       return 0;
       }
