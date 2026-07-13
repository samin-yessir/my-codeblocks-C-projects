
#include <stdio.h>

int main() {

    int A[11];
    int i, sum = 0;
    float avg;
    int H;

    for (i=0;i<=10;i++);
        scanf("%d", &A[i]);
    //for (i=0;i<=10;i++);
      //  printf("%d", A[i]);

//    avg = (float)sum/11; //typecasting
  //  printf("%f\n", avg);

    int lowest = A[0]; //H = 10
    for (i=0;i<=10;i++){
        if (A[i] < H)
            H = A[i];
        }
        printf("%d", lowest);

 return 0;
}
