// 2.

#include<stdio.h>
int main(){

    int a,b,c;

    printf("enter the month number 1 to 12 :-  ");
    scanf("%d", &a);

    switch(a){

        case 1:
            printf("1. = january");
            break;

        case 2:
            printf("2. = febery");
            break;

        case 3:
            printf("3. = march");
            break;

        case 4:
            printf("4. = april");
            break;

        case 5:
            printf("5. = may");
            break;

        case 6:
            printf("6. = june");
            break;

        case 7:
            printf("7. = july");
            break;

        case 8:
            printf("8. = august");
            break;

        case 9:
            printf("9. september");
            break;

        case 10:
            printf("10. octember");
            break;

        case 11:
            printf("11. november");
            break;

        case 12:
            printf("12. december");
            break;
    }
    return 0;
}

//********************************************************************************************************************************************************************

// 1.

#include<stdio.h>
int main()
{

    int choice;
    char a[50];

    printf("enter the name :- ")
    scanf("%s",&a);

    int mo;
    int pro;
    int pre,xyz,abc;
    printf("enter the your mobile number:- ")
    scanf("%d",&mo);

    printf("1. buy the product\n");
    printf("2. replace the product\n");
    printf("please choice to upper case");
    scanf("%d",&choice)
    switch(choice){

        case 1:
            printf("which is the product :- ");
            scanf("%d",&pro);

            printf("1. electronoics product ");
            printf("2. clothes product ");
            printf("3. female product ");
            printf("4. male product ");
            printf("5. gym product ");
            printf("6. weast in best product ");
            printf("please choice this product :- ");
            scanf("%d",&pre)
                switch(pre){

                    case 1:
                        printf("1. smart-phone");
                        printf("2. earphone ");
                        printf("3. earburds ");
                        printf("4. t.v. ");
                        printf("5. other product");
                        break;

                    case 2:
                        printf("female clothes");
                        printf("male clothes");
                        printf("child clothes");
                        printf("others product");
                        break;

                    case 3:
                        printf("female clothes");
                        printf("inside clothes");
                        printf("others product");
                        break;

                    case 4:
                        printf("male clothes ");
                        printf("inside clothes");
                        printf("other product");
                        break;

                    case 5:
                        printf("doumbles");
                        printf("gym clothes ");
                        printf("protine chake ");
                        printf("other product ");
                        break;

                    case 6:
                        printf("cane product");
                        printf("watch product");
                        printf("other product");
                        break;
                }
            break;
        case 2:
            printf("which is replace the product :- ");
            scanf("%d",&xyz);

            printf("1. electronoics product ");
            printf("2. clothes product ");
            printf("3. female product ");
            printf("4. male product ");
            printf("5. gym product ");
            printf("6. weast in best product ");
            printf("please choice this product :- ");
            scanf("%d",&abc)
                switch(pre){

                    case 1:
                        printf("1. smart-phone");
                        printf("2. earphone ");
                        printf("3. earburds ");
                        printf("4. t.v. ");
                        printf("5. other product");
                        break;

                    case 2:
                        printf("female clothes");
                        printf("male clothes");
                        printf("child clothes");
                        printf("others product");
                        break;

                    case 3:
                        printf("female clothes");
                        printf("inside clothes");
                        printf("others product");
                        break;

                    case 4:
                        printf("male clothes ");
                        printf("inside clothes");
                        printf("other product");
                        break;

                    case 5:
                        printf("doumbles");
                        printf("gym clothes ");
                        printf("protine chake ");
                        printf("other product ");
                        break;

                    case 6:
                        printf("cane product");
                        printf("watch product");
                        printf("other product");
                        break;
                }
            break;



    }


}