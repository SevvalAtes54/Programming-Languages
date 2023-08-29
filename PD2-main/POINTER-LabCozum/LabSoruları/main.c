//
//  main.c
//  Pointers
//
//  Created by my computer on 3.04.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
  
   
    int elm;
    int month[12]={1,2,3,4,5,6,7,8,9,10,11,12};
    int *ptr;
    ptr = month;
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
    elm = ptr[3];
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
    printf("%d\n",elm);
    ptr= month +3;
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
    ptr= &month[3];
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
    elm =(ptr+2)[2];
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
    elm = *(month+3);
    printf("%d\n",elm);
    ptr = month;
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
    elm= *(ptr+2);
    printf("%d\n",elm);
    elm =*(month+1);
    printf("%d\n",elm);
    
    
    
//    int k = 15;
//    int m=20;
//    int *ptr;
//    printf("%d\n",*ptr);
//    *ptr = &k;
//
//    int *ptr2 =&m;
//    printf("%d\n",k);
//    printf("%d\n",ptr);
//    printf("%d\n",&ptr);
//    printf("%d\n",*ptr);
//    printf("%d\n",*(ptr+2));
//    printf("%d\n",*(ptr)+2);
//    printf("%d\n",*ptr2);
//    printf("%d\n",ptr2);
//    ptr2+=2;
//    printf("%d\n",ptr2);
//    printf("%d\n",&ptr2);
//    printf("%d\n",*ptr2);
//    (*ptr2)+=2;
//    printf("%d\n",&ptr2);
//    printf("%d\n",ptr2);
//    printf("%d\n",*ptr2);
//    printf("%d\n",&ptr);
//    printf("%d\n",*ptr);
//
//    printf("%d\n",m);
//    printf("%d\n",k);
//    m = *ptr;
//    printf("%d\n",m);
//    k = ptr;
//    printf("%d\n",k);
////
//   * ptr = 20;
//    printf("%d\n",*ptr);
//    printf("%d\n",m);
//
//    printf("%d\n",k);
//
//    printf("%d\n",ptr);
//    printf("%d\n",&k);
//    printf("%d\n",*ptr);
  
    return 0;
}
