//18> you are drive
//80> you are aged
//<18 you are child
#include <stdio.h>
int main (){
    int x=87;
    // printf("enter age");
    // scanf("%d",x);
// if (x>18){
//     printf("you are drive");
// }
// else if (x>80){
//     printf("you are aged");
// }
// else if (x<18){
//     printf ("you are child");
// }
// }
//m1
// if(x>18 && x<80){
//     printf("you are drive must liceanse ");

// }
// else if(x>80){
//     printf("you are aged");

// }
// else{
//     printf("you are baby");
// }
// }

//m2 nested if else

if(x>18){
    if(x>80){
        printf("you are aged");
    }
    else{
        printf("you are drive");
    }


}
else{
    printf("you are baby");
}
}