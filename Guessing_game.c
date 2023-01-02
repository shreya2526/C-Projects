#include<stdio.h>
#include<stdlib.h>

void main(){
    int guess_num, secret_num, choice, i, num;
    guess_num=3;
    secret_num=9;
    printf("\n\n  GUESSING GAME  \n\n");
    printf("\n\nPress 1 to start\nPress 0 to quit.\n\nEnter your choice: ");
    scanf("%d",&choice);
    if(choice==1){
        printf("\n\nGame has started!!\n");
    }
    else{
        printf("\nQuit\n\n");
        exit(0);
    }
    printf("\n\nPress 1 to guess the secret number\n\n");
    for(i=1;i<=guess_num;i++){
        printf("\n %d no chance: ",i);
        scanf("%d",&num);
        if(num==secret_num){
            printf("\n\n    YOU WIN!!   \n\n");
            break;
        }
        
    }
    
    if(num!=secret_num)
        printf("\n\n    YOU LOOSE   \n\n");
}