#include<stdio.h>
#include<stdlib.h>

struct  node
{
    int info;
    struct  node *link;
    };
    struct node* first= NULL;

void insert(int);
void insend(int);
void display(struct node *);
void insord(int , int );
int count;


void main()
{int pop,pop2,pop3,pop4,pop5,pop6,pop7;
    scanf("%d%d%d%d%d%d%d%d%d",&pop,&pop2,&pop3,&pop4,&pop2,&pop5,&pop6,&pop7,&pop2);
    
    
    insert(pop3);//67
    
    insend(pop4);//56
    
    insend(pop2);//78
    insend(pop7); //22
    
    
    
    insend(pop);//89
    
    insend(pop5);//45
    
    insend(pop6);//34
    
    
    
    
    
    
  
    display(first);
    
}




void insert(int x){
    struct node* new;
    new = (struct node*)malloc(sizeof(struct node));
    new->info = x;
    new->link = NULL;
    if(first == NULL)
    {
        first = new;
    }
    else{
        new->link = first;
        first = new;
    }
}






void insend(int x)
{
    struct node* new;
    new = (struct node*)malloc(sizeof(struct node));
    new->info = x;
    new->link= NULL;
    if(first == NULL)
    {
        first = new;
    }
    else
    {
        struct node* p;
        p= first;
        while(p->link != NULL)
        {
            p= p->link;
        }
        p->link = new;
    }
}

void display(struct node *first)
{
    struct node *save;
    
    save = first;
    while (save!=NULL)
    {
        printf("%d\n",save->info);
        save= save->link;
        count++;
    }
        //printf("%d\n",count);
}
