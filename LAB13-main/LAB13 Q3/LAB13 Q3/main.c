//
//  main.c
//  LAB13 Q3
//
//  Created by my computer on 3.01.2023.
//

#include <stdio.h>
int ciftmi_tekmi (int a);
int main(int argc, const char * argv[]) {
    // Bir sayının çift mi tek mi olduğunu kontrol eden fonksiyonu ve kullanımını gösteren programı yazınız.
    int d = ciftmi_tekmi(5);
    
    printf("%d",d);
    if (d==0){
        printf("cifttir");
    }
    else{
        printf("tektir");
    }
    return 0;
}
int ciftmi_tekmi(int a){
    
    if(a%2==0){
        
        return 0;
        
    }
    else{
        return 1;
        
    }
    
    
    
}

