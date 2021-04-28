/******************************************************************************

Exercises C
*******************************************************************************/
// 

#include <stdio.h>
#include <stdlib.h>
int main()
{
int a = rand();
int b = rand();
int c =rand();
float d = (a+b+c);
printf("%f",d/3);
return 0;
}

#include <stdio.h>
#define NUM 30;
int main()
{
float a=10;
int num = a + 2;
a = num / 2;
float b = a;
printf("%f", a+b);
return 0;
}

#include <stdio.h>
int main()
{
    double r;
    double p = 3.141592;
    printf("Enter an integer: ");
    scanf("%lf", &r);  
    double pe = 2 * p *r;
    double emvadon = p * pow(r,2);
    printf("Perimetros ine %lf",pe);
    printf("Emvadon  ine %lf",emvadon);
    return 0;
}


#include <stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter an integer: ");
    scanf("%d", &a);  
    printf("Enter an integer: ");
    scanf("%d", &b); 
    printf("Apotelesma %d %d",a*-1,b*-1);
    
    return 0;
}

/******************************************************************************

Exercises part B !
*******************************************************************************/
// 



#include <stdio.h>
int main()
{
    int a;
    float  b;
    printf("Enter an integer: ");
    scanf("%d", &a);  
    printf("Enter an real number: ");
    scanf("%f", &b);
    float e= (a + b)*3;
    printf("Apotelesma %.02f", e);
    return 0;
}

#include <stdio.h>
int main()
{
    int a;
    float  b;
    int c;
    float  d;
    float money;
    printf("Enter an Sinolo Piatwn: ");
    scanf("%d", &a);  
    printf("Posa i timi Piatou??");
    scanf("%f", &b);
     printf("Enter Sinolo Potiriwn ");
    scanf("%d", &c);  
    printf("Posa i tmi kathe potiriou");
    scanf("%f", &d);
    printf("Dwse Hrimata");
    scanf("%f", &money);
    float e=  (a*b) + (c*d);
    if (money > e) {
        printf("Resta : %f", money - e);
    }
    else{
        printf("Liga");
    }
    
    return 0;
}



/////////////////Ask 2 (A)

#include <stdio.h>
int main()
{
    int a;
    int  b;
    printf("Enter an integer: ");
    scanf("%d", &a);  
    printf("Enter an real number: ");
    scanf("%d", &b);
    if (a>b){
    printf("Prwtos Arhirmos %d", a);
    }
    else if (a == b){
        printf("Ine Isa");
    }
    else{
        printf("Defteros Arithmos %d", b);
    }
 
    return 0;
}

////ASK 2(B)

#include <stdio.h>
int main()
{
    float a;
    float  b;
    float c;
    float d;
    
    printf("Dwse Elahisto Arihtmo\n ");
    scanf("%f", &a);  
    
    printf("Dwse prwto vathmou foititi\n");
    scanf("%f", &b);
     printf("Dwse prwto vathmou foititi\n");
    scanf("%f", &c);
     printf("Dwse prwto vathmou foititi\n");
    scanf("%f", &d);
    
    printf("Prepi na ine panw apo %f \n",a);
    if (b >= a) {
        printf("Petihe %f\n", b);
    }
       if (c >= a) {
        printf("Petihe %f\n", c);
    }
       if (d >= a) {
        printf("Petihe %f\n", d);
    }
    return 0;
}