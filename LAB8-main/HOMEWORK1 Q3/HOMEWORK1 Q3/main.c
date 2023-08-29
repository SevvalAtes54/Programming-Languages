//
//  main.c
//  HOMEWORK1 Q3
//
//  Created by my computer on 10.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Determine and Output Whether Number N is Even or Odd.
   
    int N;
    printf("Bir sayi giriniz");
    scanf("%d",&N);
    
    if(N%2==0){
        printf("N çift bir sayidir");
    }
    else{
        
        printf("N tek bir sayidir");
    }
    return 0;
}
