#include  <stdio.h>
#include  <stdlib.h>

#define MAX 3

int main(){
    int r[MAX],count0=0,count1=0;
    int i;

    printf("Tossing a coin...\n");
    
    for(i=0;i<MAX;i++){
        r[i]=rand()%2;
        if(r[i]==0){
            count0++;
            printf("Round %d: Heads\n",i);
        }else{
            count1++;
            printf("Round %d: Tails\n",i);
        }
    }
    printf("Heads: %d, Tails: %d\n",count0,count1);

    return 0;
}