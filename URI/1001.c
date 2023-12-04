//Read 2 variables, named A and B and make the sum of these two variables, assigning its result to the variable X. Print X as shown below. Print endline after the result otherwise you will get “Presentation Error”.

#include <stdio.h>
 
int main() {
 
    int A,B,X;
    
    scanf("%d",&A);
    scanf("%d",&B);

    X=A+B;

    printf("X = %d\n",X);
    return 0;
}