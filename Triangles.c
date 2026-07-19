// Program to print right-triangle star patterns
#include <stdio.h>
int n;

int scale_1(){
    for(int i = 1 ; i <= n ; i++) {
    for(int j = 1 ; j <= i ; j++){
        printf(" *");
    }
    printf("\n");
}
}


int scale_2(){
    for(int i = n ; i >= 1 ; i--){
    for(int j = 1 ; j <= i ; j++){
        printf(" *");
    }
    printf("\n");
  }
}


int scale_3(){
    for(int i = 1 ; i <= n ; i++){
    for(int j = 1 ; j <= n ; j++){
        if(i > j){
            printf("  ");
        }
         else {
            printf(" *");
        }
    }
    printf("\n");
  }
}


int scale_4(){
    for(int i = n ; i >= 1 ; i--){
    for(int j = 1 ; j <= n ; j++){
        if(i > j){
            printf("  ");
        }
        else {
            printf(" *");
        }
    }
    printf("\n");
   }
}




int main(){
 printf("                         **************************                         \n");
 printf("                          Choosing Right Triangle                           \n");
 printf("                         **************************                         \n");

 printf("Scale number 1: \n");
  for(int i = 1 ; i <= 3 ; i++) {
    for(int j = 1 ; j <= i ; j++){
        printf(" *");
    }
    printf("\n");
  }
  printf("\n");



 printf("Scale number 2: \n");
  for(int i = 3 ; i >= 1 ; i--){
    for(int j = 1 ; j <= i ; j++){
        printf(" *");
    }
    printf("\n");
  }
  printf("\n");



 printf("Scale number 3: \n");
  for(int i = 1 ; i <= 3 ; i++){
    for(int j = 1 ; j <= 3 ; j++){
        if(i > j){
            printf("  ");
        }
         else {
            printf(" *");
        }
    }
    printf("\n");
  }
  printf("\n");



  printf("Scale number 4: \n");
   for(int i = 3 ; i >= 1 ; i--){
    for(int j = 1 ; j <= 3 ; j++){
        if(i > j){
            printf("  ");
        }
        else {
            printf(" *");
        }
    }
    printf("\n");
   }
   printf("\n");




   int m;
    do {
    printf("Choose Your Scale: ");
    scanf("%d", &m);
      } while(!((m >= 1) && (m <= 4)));

   printf("put the number of the stars: ");
   scanf("%d", &n);

   switch(m) {
    case (1):
    scale_1();

    break;
    case (2):
    scale_2();

    break;
    case (3):
    scale_3();

    break;
    case (4):
    scale_4();

    break;
   }
   
   printf("Amazing Right Triangle :)");

   return 0;
}