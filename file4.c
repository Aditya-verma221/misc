#include<stdio.h>

void main()
{
    FILE *filenum, *odd, *even;
    int i;
    filenum= fopen("filenums.txt","r");
    even= fopen("even.txt","w");
    odd= fopen("odd.txt","w");
    while(!feof(filenum))
    {
        fscanf(filenum,"%d,",&i);

        if(i%2==0)
    {
        fprintf(even,"%d",i);
    }
    else
    {
        fprintf(odd,"%d",i);
    }
    }
    fclose(filenum);
    fclose(even);
    fclose(odd);

}