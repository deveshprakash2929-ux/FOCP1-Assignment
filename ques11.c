#include<stdio.h>

int main(){
    int scores[10];
    int even[10];
    int odd[10];
    int i, even_count=0, odd_count=0;

    printf("Enter 10 scores: \n");
    for(i=0;i<10;i++){
        scanf("%d", &scores[i]);
    }

    for(i=0;i<10;i++){
        if(scores[i] % 2==0){
            even[even_count] = scores[i];
            even_count++;
        }
        else{
            odd[odd_count] = scores[i];
            odd_count++;
        }
    }

    printf("\nEven numbers are: \n");
    for(i=0;i<even_count;i++){
        printf("%d ", even[i]);
    }
    
    printf("\nOdd numbers are: \n");
    for(i=0;i<odd_count;i++){
        printf("%d ", odd[i]);
    }


    return 0;
}