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
void delete(int )
int count;


void main()
{int pop,pop2,pop3,pop4,pop5,pop6,pop7;
    scanf("%d",&pop);
    
    scanf("%d",&pop2);
    insend(pop2);//78
    scanf("%d",&pop3);
    insend(pop3);//67
    scanf("%d",&pop4);
    insert(pop4);//56
    insend(pop); //89
    scanf("%d",&pop3);//78
    
    scanf("%d",&pop5);//45
    insend(pop5);
    scanf("%d",&pop6);//34
    insend(pop6);
    scanf("%d",&pop7);//22
    insend(pop3);
    scanf("%d",&pop3);//78
    
    
    
    
    
   // insend(4);
   // insend(10);
    //insert(55);
    //display(first);
    //insord(45, 2);
    display(first);
    //printf("%d",count);
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
void insord(int x, int pos)
{
    struct node* new, *p;
    int i=1;
    if(pos > count)
    {
        printf("Invalid location\n list having %d nodes\n",count);
    }
    else
    {
        p = first;
        while (i<pos)
        {
            p = p->link;
            i++;
        }
        new = (struct node*)malloc(sizeof(struct node));
        new->info = x;
        new->link= p->link;
        p->link = new;

    }
}
void delete(int loc)
{
    struct node* new;
    if(loc>count)
    {
        printf("Invaid location\n");
    }
    else if (loc==1)
    {
        new = first;
        first = new->link;
        new->link = NULL;
        free(new);
    }
    else
    {
        struct node* p= first, *q;
        int i = 1;
        while(i<loc - 1)
        {
            p= p->link;
            i++;
        }
        q = p->link;
        p->link = q->link;
        q->link = NULL;
        free(q);
    }
}