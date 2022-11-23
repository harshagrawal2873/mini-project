// program for making calculator for basic operations.
// first we initialize functions.
// then in main function we initialize variables.
// then with the help of switch case we select a particular operation.
// after that in particular cases we call function intialize above.
// and last we define the intialize functions according ro their operation.

#include <math.h>
#include <stdio.h>
float addition(float a, float b);
float sub(float x, float y);
float multiplication(float x1, float y1);
float divide(float x2, float y2);
float percentage(float x3, float y3);
float square(float x4);
float cube(float x5);
float squareroot(float x6);
float cuberoot(float x7);
float logarithm(float x8);
float sine(float x9);
float cosine(float x10);
float tangent(float x11);

int main() {
  float n1, n2, sum;
  float n3, n4, subt;
  float n5, n6, multu;
  float n7, n8, divu;
  float n9, N, per;
  float n10, sq;
  float n11, cu;
  float n12, squrt;
  float n13, cubrt;
  float n14, logu;
  float n15, sinu;
  float n16, cosu;
  float n17, tanu;
  int operation;
  float m = 100;
  float m2 = 100;
  float m3 = 100;
  float m4 = 100;

  printf("1:Addition\n");
  printf("2:Subtracion\n");
  printf("3:Multiplication\n");
  printf("4:Divide\n");
  printf("5:Percentage\n");
  printf("6:Square\n");
  printf("7:Cube\n");
  printf("8:SquareRoot\n");
  printf("9:Cuberoot\n");
  printf("10:logarithm\n");
  printf("11:sine\n");
  printf("12:cosine\n");
  printf("13:tangent\n");
  
  printf("enter operation number\n");
  scanf("%d", &operation);
while(1){
  switch (operation) {
  case 1:

    printf("Enters two numbers:\n ");
    scanf("%f %f", &n1, &n2);

    sum = addition(n1, n2);
    // function calling is done in the above statement.
    printf("sum = %.2f\n", sum);

    while (m > 1) {
      //  printf("enter value of m\n");
      printf("+");
      scanf("%f", &m);
      sum = sum + m;
      printf("sum:%.2f\n", sum);
    }
    break;

  case 2:

    printf("enter two numbers:\n");
    scanf("%f %f", &n3, &n4);

    subt = sub(n3, n4);
    printf("%.2f\n", subt);

    while (m2 > 1) {
      // printf("enter value of m2\n");
      printf("-");
      scanf("%f", &m2);

      subt = subt - m2;
      printf("difference:%.2f\n", subt);
    }
    break;

  case 3:

    printf("enter two numbers:\n");
    scanf("%f %f", &n5, &n6);

    multu = multiplication(n5, n6);
    printf("%.2f\n", multu);

    while (m3 > 1) {
      printf("enter value of m3\n");
      scanf("%f", &m3);

      multu = multu * m3;
      printf("product:%.2f\n", multu);
    }
    break;

  case 4:

    printf("enter two numbers\n");
    scanf("%f %f", &n7, &n8);

    divu = divide(n7, n8);
    printf("%.2f\n", divu);

    while (m4 > 1) {
      printf("enter value of m4\n");
      scanf("%f", &m4);

      divu = divu / m4;
      printf("%.2f\n", divu);
    }
    break;

  case 5:

    printf("enter two numbers \n");
    scanf("%f %f", &n9, &N);

    per = percentage(n9, N);
    printf("%.2f%%\n", per);
    break;

  case 6:

    printf("enter a number\n");
    scanf("%f", &n10);

    sq = square(n10);
    printf("%.2f\n", sq);

    break;

  case 7:

    printf("enter a number\n");
    scanf("%f", &n11);

    cu = cube(n11);
    printf("%.2f", cu);
    break;

  case 8:
    printf("enter a number\n");
    scanf("%f", &n12);

    squrt = squareroot(n12);
    printf("%.2f", squrt);
    break;

  case 9:
    printf("enter a number\n");
    scanf("%f", &n13);

    cubrt = cuberoot(n13);
    printf("%.2f", cubrt);
    break;

  case 10:
    printf("enter a number\n");
    scanf("%f", &n14);

    logu = logarithm(n14);
    printf("%.2f", logu);
    break;

  case 11:
    printf("enter a value\n");
    scanf("%f", &n15);

    sinu = sine(n15);
    printf("%.2f", sinu);
    break;

  case 12:
    printf("enter a value\n");
    scanf("%f", &n16);

    cosu = cosine(n16);
    printf("%.2f", cosu);
    break;

  case 13:
    printf("enter a value\n");
    scanf("%f", &n17);

    tanu = tangent(n17);
    printf("%.2f", tanu);
    break;
  }
    printf("1:Addition\n");
  printf("2:Subtracion\n");
  printf("3:Multiplication\n");
  printf("4:Divide\n");
  printf("5:Percentage\n");
  printf("6:Square\n");
  printf("7:Cube\n");
  printf("8:SquareRoot\n");
  printf("9:Cuberoot\n");
  printf("10:logarithm\n");
  printf("11:sine\n");
  printf("12:cosine\n");
  printf("13:tangent\n");
  printf("0.For Exit");
  printf("Enter the value\n");
  scanf("%d",&operation);
  if(operation == 0){break;}
  }
  return 0;
}

float addition(float a, float b) {
  float result;
  result = a + b;
  return result; // return statement
}
float sub(float x, float y) {
  float subtraction;
  subtraction = x - y;
  return subtraction;
}
float multiplication(float x1, float y1) {
  float mult;
  mult = x1 * y1;
  return mult;
}
float divide(float x2, float y2) {

  float div;
  div = x2 / y2;
  return div;
}
float percentage(float x3, float y3)

{
  float result5;
  result5 = (x3 / y3) * 100;
  return result5;
}
float square(float x4) {
  float result6;
  result6 = x4 * x4;
  return result6;
}
float cube(float x5) {
  float result7;
  result7 = x5 * x5 * x5;
  return result7;
}
float squareroot(float x6) {
  float result8;
  result8 = sqrt(x6);
  return result8;
}
float cuberoot(float x7) {
  float result9;
  result9 = cbrt(x7);
  return result9;
}
float logarithm(float x8) {
  float result10;
  result10 = log(x8);
  return result10;
}
float sine(float x9) {
  float result11;
  result11 = sin(x9);
  return result11;
}
float cosine(float x10) {
  float result12;
  result12 = cos(x10);
  return result12;
}
float tangent(float x11) {
  float result13;
  result13 = tan(x11);
  return result13;
}