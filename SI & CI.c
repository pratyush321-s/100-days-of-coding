# include <stdio.h>
# include <math.h>
float main (){
    int P,R,T,SI,CI;
   printf("enter the value of P:");
   scanf("%d",&P);
   printf("enter the value of R:");
   scanf("%d",&R);
   printf("enter the value of T:");
   scanf("%d",&T);
   SI= (P*R*T)/100;
   CI = P * pow((1 + R / 100.0), T) - P;
   printf("simple intrest is %d ",SI);
   printf("COMPOUND intrest is %d ",CI);
return 0;
}