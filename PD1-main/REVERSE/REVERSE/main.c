//
//  main.c
//  REVERSE
//
//  Created by my computer on 10.01.2023.
//

#include <stdio.h>
void reverse(int array[]);
int main(int argc, const char * argv[]) {
    int dizi[5];
    for(int i =0;i<5;i++){
        scanf("%d",&dizi[i]);
        
    }
    reverse(dizi);
    for(int k =0;k<5;k++){
        printf("%d ",dizi[k]);
        
    }
    return 0;
}

void reverse(int array[]){
    int temp;
    int n =5;
    for(int i=0;i<n/2;i++){
        temp =  array[i];
        array[i]= array[n-i-1];
        array[n-i-1]= temp;
    }
    
    
}
