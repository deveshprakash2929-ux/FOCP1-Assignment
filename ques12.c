#include<stdio.h>

int main(){
    int score[10];
    int i, max, min;
    
    printf("Enter 10 scores: \n");
    for(i=0; i<10;i++){
        scanf("%d", &score[i]);
    }

    max = score[0];
    min = score[0];

    for(i=0;i<10;i++){
        if(score[i]>max){
          max = score[i];
        }
        if(score[i]<min){
            min = score[i];
        }
    
    }

    printf("The maximum score is %d\n", max);
    printf("The minimum score is %d\n", min);
    
    return 0;
}