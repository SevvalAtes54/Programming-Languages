//
//  main.c
//  final
//
//  Created by my computer on 10.01.2023.
//

#include <stdio.h>
void even_or_odd(int dizi[],int odd[],int even[],int evenSayac,int oddSayac);
int main(int argc, const char * argv[]) {
 
    
    //even odd numbers
    int array[5] ,oddArray[5],evenArray[5];
    for(int i =0;i<5;i++){
        printf("bir deger girin : ");
        scanf("%d",&array[i]);
    }
    int a =0,b=0;
    even_or_odd(array,oddArray,evenArray,a,b);
    printf("%d",b);
   
    for(int i =0;i<5;i++){
    //    printf("%d",oddArray[i]);
    }
    
   
    return 0;
}
void even_or_odd(int dizi[],int odd[],int even[],int evenSayac,int oddSayac){
   
    for(int i = 0;i<5;i++){
        
        if(dizi[i]%2==0){
            even[evenSayac] = dizi[i];
            evenSayac++;
        }
        else{
            odd[oddSayac] = dizi[i];
            oddSayac++;
            
        }
    }
    evenSayac++;
    oddSayac++;
}



