#include <stdio.h>
#include <math.h>

#define Nmax 300

double func(double x){
    return cos(x) + x;
}
double dfunc(double x){
    return (-sin(x) + 1);
}

int main(){
    double x,a=200;
    int i;
    for(i=0;i<Nmax;i++){
        a = a - func(a)/dfunc(a);
        if(fabs(func(a))<10e-20){
            break;
        }
    }
    printf("i:%d x:%.20lf f(x):%.20lf\n",i,a,func(a));
}