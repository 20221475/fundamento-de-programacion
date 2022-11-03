#include<stdio.h>

int main()
 {
 int notaf;

 printf(" escriba la nota del estudiante");
 scanf("%i",&notaf);
  if(notaf>= 70){
     printf("pasaste con con a 70");
     printf ("la nota es %i" ,notaf);
   }
   else{
     printf("tu nota es menor a 70 y te quemaste ");
   }
 getchar();
 return 0;
 }
