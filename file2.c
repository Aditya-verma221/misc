#include<stdio.h>
 
int main()
{
  FILE *fp = fopen("hello.txt", "r");
  FILE *fp2 = fopen("hello2.txt", "w");
  char ch;
  while (!feof(fp))
  {
    //To display the contents of the file on the screen
    //putchar(ch);
    ch = getc(fp);
    putc(ch,fp2);
  }
  
   
  fclose(fp);
  fclose(fp2);
     
  
  return 0;
}