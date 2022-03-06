#include<stdio.h>
#include<stdlib.h>

struct  node
{
    int info;
    struct  node *link;
    };

void display(struct node *);
struct node* insert(int, struct node *);    
struct node* insend(int ,struct node *);
void main()
{
    struct node *first, *second, *third;
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    first-> info=1;
    first->link= second;

    second-> info=2;
    second->link= third;

    third-> info=3;
    third->link= NULL;

    //display(first);
    first =  insend(24,first);
    printf("After insert\n");
    display(first);
}

void display(struct node *first)
{
    struct node *save;
    save = first;
    while (save!=NULL)
    {
        printf("%d,\n",save->info);
        save= save->link;
    }
        
}

struct node* insert(int x,struct node *first)
{
    struct node *new;
    new= (struct node *)malloc(sizeof(struct node));
    new->info=x;
    if(new==NULL)
    {
        printf("Overflow");
    }
    else
    {
        if(first=NULL)
        {
            new->link=NULL;
            return new;
        }
        else 
        {
            new->link=first;
            return new;
        }
    }
}


struct node* insend(int x,struct node *first)
{
    struct node *new;
    struct node *save;
    new= (struct node *)malloc(sizeof(struct node));
    new->info=x;
    if(new==NULL)
    {
        printf("Overflow");
    }
    else
    {
        if(first=NULL)
        {
            new->link=NULL;
             return new;
        }
        else 
        {
            new->link=first;
            if(first == NULL)
            {
                return new;
            }
            else
            {
                first= save;
                while (save->link != NULL)
                {
                    save = save->link;
                    save->link= new;
                    return first;
                }
                
                
                
            }
        }
    }
}
