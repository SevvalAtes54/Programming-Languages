//
//  main.c
//  FINAL Q1
//
//  Created by my computer on 9.01.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //
    int dizi[5],dizi2[5],n=4,a=0;
     for (int i=0; i<5;i++){
         printf("bir sayi giriniz");
         scanf("%d",&dizi[i]);
         if(dizi[i]%3==0){
             dizi[a]=dizi[i];
             a++;
             
         }
         else{
             dizi[n]=dizi[i];
             n--;
         }
     }
    for (int k=0;k<5;k++){
       printf("%d ",dizi[k]);
      
   }
    

    return 0;
}
