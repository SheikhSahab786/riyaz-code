#include <stdio.h>
int main (){
    int n;
    printf("Enter any number to pritn table :-");
    scanf("%d",&n);
    for (int i=1;i<11;i++){
        printf ("%dx%d=%d\n",n,i,i*n);
    }
}