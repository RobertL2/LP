#include <stdio.h>
#include <math.h>

int main()
{
    printf("Hello ");
    
    int a=3, b=5;
    printf("a=%d; b=%d\n", a,b);
    //%d-int un fel de cout
    
    float c=10.3;
    printf("c%f\n", c);
    //%f-float, double
    
    double d=10.3;
    printf("d=%f\n", d);
    
    float rez=a/b;// ne afiseaza catul, practic fara .6
    printf("rez=%f\n", rez);
    
    int rest=a%b; //-MOD; restul 2345 %10= 234
    printf("rest=%d\n", rest);
    
    float a1=3.0, b1=5.0;// trebuie folositi doi intregi pentru a fi afisati intregi in loc de cat
    float rez2=a1/b1;
    printf("rez2=%f\n", rez2);
    
    int x=3;// ridicare la putere pow(exp, putere)
    printf ("x^2=%d\n", x*x);
    printf ("x^2=%d\n", pow(x,2));
     
    int i=1;
     printf("i=%d\n", i+=1);// echivalent ++i, 2
    printf("i=%d\n", i++);// 2
     printf("i=%d\n", i);// 3
      printf("i=%d\n", ++i);// 4
      
      //h : R×R×R→R, h(x,y,z)= x/3 + y/2 − z3/5
      float x1=3, y=2, z=5, h;
      h=x1/3+y/2-pow(z,3)/5;
      printf("h=%f\n", h);
      

    return 0;
}
