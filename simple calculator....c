/*simple calculator
by Faith wambui
Feb 2022 MIT LICENCE
C89 COMPILER
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declaration\n");
    int num1,num2,sum,diff,product;
    float quotient;
    printf("simple calculator!\n");
    //capture inputs
    printf("Enter two values:\n");
    scanf("%d%d",&num1,&num2);
    //computations
    sum=num1+num2;
    diff=num1-num2;
    product=num1*num2;
    quotient=(float)num1/num2;
    //output
    printf("%d+%d=%d\n",num1,num2,sum);
    printf("%d-%d=%d\n",num1,num2,diff);
    printf("%ad*%ad=%d\n",num1,num2,product);
    printf("%ad/%d=%f\n",num1,num2,quotient);
    return 0;
}
