// 1. 

#include<stdio.h>
int main(){

    int a;
    int b;

    printf("enter the a :- ");
    scanf("%d",&a);

    printf("enter the b :- ");
    scanf("%d",&b);

    (a>b) ? printf("a is greater") : printf("b is greater");

    return 0;


}


//********************************************************************************************************************************************************************

// 2.
 
#include <stdio.h>
int main() {

    int a;
    int b;
    int c;

    printf("enter the a :-  ");
    scanf("%d",&a);

    printf("enter the b :-  ");
    scanf("%d",&b);

    printf("enter the c :-  ");
    scanf("%d",&c);

    if(a<b || a>b)
    {
        if(a<c)
        {
            printf("a is minimum number");
        }

        else if(b<c && b<a)
        {
                printf("b is minimum number");
            
        }
        
        else if(c<a && c<b)
        {
                printf("c is minimum number");
        }
   }
   else
   {
    printf("hello");
   }
    return 0;
}

// *******************************************************************************************************************************************************************

// 3. 

#include<stdio.h>
int main(){

    int a,b,c,d;

    printf("enter the a :- ");
    scanf("%d",&a);

    printf("enter the b :- ");
    scanf("%d",&b);

    printf("enter the c :- ");
    scanf("%d",&c);

    printf("enter the d :- ");
    scanf("%d",&d);

    if(a>b || a<b){
        if(a>c && a>d)
        {
            printf("a is greater");
        }

        else if(b>a && b>c && b>d)
        {
            printf("b is greater");
        }

        else if(c>a && c>b && c>d)
        {
            printf("c is greater");
        }

        else if(d>a && d>b && d>c)
        {
            printf("d is greater");
        }
    }
    else
    {
            printf("sorry");
    }

    return 0;
}

//********************************************************************************************************************************************************************

//4.

#include<stdio.h>
int main(){

    int a,b,c,d,e;

    printf("enter the a :- ");
    scanf("%d", &a);

    printf("enter the b :- ");
    scanf("%d", &b);

    printf("enter the c :- ");
    scanf("%d", &c);

    printf("enter the d :- ");
    scanf("%d", &d);

    printf("enter the e :- ");
    scanf("%d", &e);

    if( a<b || a>b){
        if(a<c && a<d && a<e){
            printf("a is minimum number");
        }
        else if(b<a && b<c && b<d && b<e){
            printf("b is minimum number");
        }
        else if(c<a && c<b && c<d && c<e){
            printf("c is minimum number");
        }
        else if(d<a && d<b && d<c && d<e){
            printf("d id minimum number");
        }
        else if(e<a && e<b && e<c && e<d){
            printf("e is minimum number");
        }
    }
    else{
        printf("sorry i can't understand");
    }
    return 0;
}

//********************************************************************************************************************************************************************

//5.

#include<stdio.h>
int main(){

    int a,b,c;

    printf("enter a :- ");
    scanf("%d", &a);

    printf("enter b :- ");
    scanf("%d", &b);

    printf("enter c :- ");
    scanf("%d", &c);


    (a>b || a<b && a>c) ? printf("a is greater number") : printf("a is not greater");
    (b>a && b>c) ? printf("b is greater number") : printf("b is not greater");
    (c>a && c>b) ? printf("c is greater number") : printf("c is not greater");

    return 0;

}

//********************************************************************************************************************************************************************

// 6.

#include<stdio.h>
int main()
{

    int a,b,c,d;

    printf("enter a :- ");
    scanf("%d", &a);

    printf("enter b :- ");
    scanf("%d", &b);

    printf("enter c :- ");
    scanf("%d", &c);

    printf("enter d :- ");
    scanf("%d", &d);

    (a>b || a<b && a>c && a>d) ? printf("a is greater number") : printf("a is not greater");
    (b>a && b>c && b>d) ? printf("b is greater number") : printf("b is not greater");
    (c>a && c>b && c>d) ? printf("c is greater number") : printf("c is not greater");
    (d>a && d>b && d>c) ? printf("d id greater number") : printf("d id not greater");

    return 0;

}

//********************************************************************************************************************************************************************

// 7.

#include<stdio.h>

int main()
{

    int a,b,c,d,e;

    printf("enter a :- ");
    scanf("%d", &a);

    printf("enter b :- ");
    scanf("%d", &b);

    printf("enter c :- ");
    scanf("%d", &c);

    printf("enter d :- ");
    scanf("%d", &d);

    printf("enter e :- ");
    scanf("%d", &e);

    (a>b || a<b && a>c && a>d && a>e) ? printf("a is greater number") : printf("a is not greater");
    (b>a && b>c && b>d && b>e) ? printf("b is greater number") : printf("b is not greater");
    (c>a && c>b && c>d && c>e) ? printf("c is greater number") : printf("c is not greater");
    (d>a && d>b && d>c && d>e) ? printf("d id greater number") : printf("d id not greater");
    (e>a && e>b && e>c && e>d) ? printf("e is greater number") : printf("e is not greater");

    return 0;

    
}

//********************************************************************************************************************************************************************