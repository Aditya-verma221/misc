#include<stdio.h>
#include<string.h>

union book{
    char title[20];
    char author[20];
    int price;
    int pages;
}u1;

void main()
{
    u1.price=100;
    printf("book price is %d rs\n",u1.price);

    u1.pages=550;
    printf("book pages are %d \n",u1.pages);
    printf("book price is %d rs\n",u1.price);
    printf("title is %c\n",u1.title);
    printf("title is %c\n",u1.author);
}