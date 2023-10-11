//2.

#include<stdio.h>
int main(){

int a,b;
printf("enter the number a  :- ");
scanf("%d", &a);


b = (a % 2 ==0 ) ? printf("%d is even number",a) : printf("%d is odd number ",a);

return 0;

}
//*****************************************************************************************

// 3.

#include<stdio.h>
int main()
{

int a,b,c,d;
printf("enter the number a :-  ");
scanf("%d",&a);
printf("enter the number b :-  ");
scanf("%d",&b);
printf("enter the number c :-  ");
scanf("%d",&c);
printf("enter the number d :-  ");
scanf("%d",&d);


if(a>b || a<b)
{

if(a>c){
	if(a>d){
		printf("a charcater and there number %d is max number ",a);
		}
	}

if(b>a){
	if(b>c){
		if(b>d){
			printf("b charcater and there number %d is max number",b);

			}
		}
	}

if(c>a){
	if(c>b){
		if(c>d){
			printf("c charcater and there number %d is max number ",c);
			}
		}

	}

if(d>a){
	if(d>b){
		if(d>c){
		    
			printf("d charcater and there number %d is max number ",d);
			}
		}
	}
}
else
{
	printf("sorry");
}

return 0;

}

//***************************************************************************************************************8

// 1.

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch); // Note the space before %c to consume any extra white space.

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("It's an alphabet!\n");
    } else if (ch >= '0' && ch <= '9') {
        printf("It's a digit!\n");
    } else {
        printf("It's a special character!\n");
    }

    return 0;
}

//*************************************************************************************************************

// 5


#include <stdio.h>

int main() {
    float unitCharges, totalBill;

    printf("Enter the electricity unit charges: ");
    scanf("%f", &unitCharges);

    if (unitCharges <= 50) {
        totalBill = unitCharges * 0.50;
    } else if (unitCharges <= 150) {
        totalBill = 50 * 0.50 + (unitCharges - 50) * 0.75;
    } else if (unitCharges <= 250) {
        totalBill = 50 * 0.50 + 100 * 0.75 + (unitCharges - 150) * 1.20;
    } else {
        totalBill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (unitCharges - 250) * 1.50;
    }

    // Adding a 20% surcharge to the total bill
    totalBill += 0.2 * totalBill;

    printf("Total electricity bill: Rs. %.2f\n", totalBill);

    return 0;
}

//********************************************************************************************************
// 4. ******************************

#include <stdio.h>

int main() {
    char input;

    printf("Enter a day character (M, T, W, T, F, S, or S): ");
    scanf(" %c", &input);  // Note the space before %c to skip any leading whitespace.

    switch (input) {
        case 'M':
        case 'm':
            printf("Monday\n");
            break;
        case 'T':
        case 't':
            printf("Tuesday\n");
            break;
        case 'W':
        case 'w':
            printf("Wednesday\n");
            break;
        case 'T':
        case 't':
            printf("Thursday\n");
            break;
        case 'F':
        case 'f':
            printf("Friday\n");
            break;
        case 'S':
        case 's':
            printf("Saturday\n");
            break;
        case 'U':
        case 'u':
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input. Please enter a valid day character (M, T, W, T, F, S, or S).\n");
    }

    return 0;
}

