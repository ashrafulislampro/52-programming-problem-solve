#include <stdio.h>

int main(void){

int t;

scanf("%d", &t);
double arr[t][2];
for(int i=0; i<t; i++){
    double r1, r2, b;
    scanf("%lf %lf %lf", &r1, &r2, &b);
    arr[i][0] = r2/((300-b)/6);
    arr[i][1] = (r2>r1)? 0: ((r1+1)-r2)/(b/6);
}

for(int i=0; i<t; i++){
    printf("%.2lf %.2lf\n", arr[i][0], arr[i][1]);
}

return 0;
}