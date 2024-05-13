#include <stdio.h>

int main(void){

int t;
scanf("%d", &t);

while(t--){
    double r1, r2, b;
    scanf("%lf %lf %lf", &r1, &r2, &b);
    printf("%.2lf %.2lf\n", r2/((300-b)/6), (r2>r1)? 0: ((r1+1)-r2)/(b/6));
}

return 0;
}