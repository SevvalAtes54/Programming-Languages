//
//  main.c
//  H1 Q3 FUNC
//
//  Created by my computer on 6.01.2023.
//

#include <stdio.h>
#include <stdlib.h>
int Even_or_Odd(int a );
int main(int argc, const char * argv[]) {
    // Determine and Output Whether Number N is Even or Odd.
    int sayi;
    printf("Bir sayi giriniz");
    scanf("%d",&sayi);
    int yazdir = Even_or_Odd(sayi);
    if( yazdir== 0){
        printf("cifttir");
    }
    else{
        printf("tektir");
    }
  
    return 0;
}

int Even_or_Odd(int a ){
    
    if(a%2 == 0){
        return 0;
    }
    else{
        return 1;
    }
    
   
}
