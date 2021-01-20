#include<stdio.h>
#include<time.h>//time(0)
#include<stdlib.h>//rand/srand
#include<unistd.h>//getpid
void intro();
int main()
    {
        intro();
        srand((unsigned int)time(NULL)+getpid());//for better seed OR better random o/p
        int length,num;
        printf("enter password length: ");
         scanf("%d",&length);
        printf("\nhow many password do you want to create?");
         scanf("%d",&num);
        for(int j=0;j<num;j++)//initilization important bc of iteration
         {
          printf("\n");
          for(int i=0;i<length;i++)
           {
            printf("%c",rand()%(126+1-47)+47);//rand()%(max_number + 1 - minimum_number) + minimum_number
           }
         }
        return 0;
    }
void intro()
{
    printf("/*RANDOM PASSWORD GENERATOR*/\t");
    printf("\t\tPASSWORD IN  b/w ASCII 47-126\n\n");
}
