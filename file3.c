#include<stdio.h>

void main()
{
    FILE *filenum, *odd, *even;
    int i;
    filenum= fopen("filenums.txt","r");
    even= fopen("even.txt","w");
    odd= fopen("odd.txt","w");
    fseek(filenum,3,SEEK_SET);
    i= getc(filenum);
    if(i%2==0)
    {
        putc(i,even);
    }
    else
    {
        putc(i,odd);
    }

}