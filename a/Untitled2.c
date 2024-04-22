#include<stdio.h>


int myfun()
{
    int age;
    printf("\nENTER YOUR AGE : ");
    scanf("%d", &age);
    if(age>18){
        printf("you are adult");
    }
    else{
        printf("your are child");
    }

}



int main()
{
    for(int i=0;i<10;i++){
        myfun();
    }
}
