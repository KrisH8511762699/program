#include<stdio.h>
int main(){

    int a=10;
    int b=20;
    int c;
    printf("before swap");
    printf("%d\n",a);
    printf("%d\n",b);

    printf("after swap");
    c=a;
    a=b;
    b=c;
    printf("%d",a);
    printf("%d",b);


}

//********************************************************************************************************************************************************************

#include <stdio.h>

int main() {
    // Input values
    int a = 5;
    int b = 10;

    // Swap without a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Output swapped values
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}



