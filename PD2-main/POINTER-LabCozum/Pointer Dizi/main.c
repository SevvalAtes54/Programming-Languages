//
//  main.c
//  Pointer Dizi
//
//  Created by my computer on 6.04.2023.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int *ptr,eleman,sum=0;
    printf("bir eleman sayisi giriniz");
    scanf("%d",&eleman);
   
    ptr = (int * )malloc(eleman*sizeof(int));
    
    
    
    
    printf("dizi elemanlarini giriniz");
    for(int i =0;i<eleman;i++){
        
        scanf("%d",ptr+i);
       sum+= *(ptr+i);
        
        
    }
    printf("%d",sum);
   getchar();
    
    return 0;
}

