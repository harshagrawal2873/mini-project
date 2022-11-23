# program for making calculator for basic operations.
#first we initialize functions.
#then in main function we initialize variables.
#then with the help of switch case we select a particular operation.
#after that in particular cases we call function intialize above.
#and last we define the intialize functions according ro their operation.

#include <stdio.h>
#include<math.h>
#  float addition( a, b);         
#  float sub(float x,float y);
#  float multiplication(float x1,float y1);
#  float divide(float x2,float y2);
# float percentage(float x3,float y3);
#  float square(float x4);
#  float cube(float x5);
#  float squareroot(float x6);
#  float cuberoot(float x7);
#  float logarithm(float x8);
import math

def addition( a, b):

  # float result;
  result = a+b;
  return result;               #return statement

def sub(  x,  y):

  # subtraction
  subtraction=x-y
  return subtraction

def multiplication(  x1,  y1):

  # mult
  mult=x1*y1
  return mult

def  divide (  x2,  y2):  
  div=x2/y2;
  return div;

def percentage (  x3, y3):

  result5 = (x3/y3)*100
  return result5

def  square (  x4):
  result6=x4*x4
  return result6

def cube ( x5):
  result7=x5*x5*x5
  return result7

def squareroot ( x6):
  result8 = math.sqrt(x6)
  return result8

def cuberoot ( x7):
  result9 = math.cbrt(x7)
  return result9

def logarithm ( x8):
  result10 = math.log(x8)
  return result10



# float n1,n2,sum;
#         float n3,n4,subt;
#          float n5,n6,multu;
#          float n7,n8,divu;
#         float n9,N,per;
#          float n10,sq;
#          float n11,cu;
#          float n12,squrt;
#          float n13,cubrt;
#    float n14,logu;
#      int operation ;
#      float m=100;
#    float m2=100;
#    float m3=100;
#    float m4=100;

print("1:Addition\n")
print("2:Subtracion\n")
print("3:Multiplication\n")
print("4:Divide\n")
print("5:Percentage\n")
print("6:Square\n")
print("7:Cube\n")
print("8SquareRoot\n")
print("9:Cuberoot\n")
print("10:logarithm\n")
  
# print("enter operation number\n")
# scanf("%d",&operation);
Operation = int(input("What's your choice"))


    
if (Operation == 1):
  # print("Enters two numbers:\n ")
  # scanf("%f %f",&n1,&n2);
  n1 = int(input("Enter the First value: "))
  n2 = int(input("Enter the Second value: "))
  sum = addition(n1, n2)
  #function calling is done in the above statement.
  print(sum)  
  while(1):
    # print("enter value of m\n")
    # print("+")
    # scanf("%f",&m);
    m = int(input("Enter the value: "))
    sum=sum+m;
    print(sum)
    if (m == 0):
      break

elif (Operation == 2):
   
  # print("enter two numbers:\n")
  n3=int(input("Enter the value : "))
  n4=int(input("Enter the value : "))
  subt=sub(n3,n4);
  print(subt)
  while(1):
    #print("enter value of m2\n")
    # print("-")
    m2=int(input("Enter the value: "))

    subt=subt-m2;
    print(subt)
    if (m2 == 0):
      break
    
elif (Operation == 3):
    
      # print("enter two numbers:\n")
  n5=int(input("Enter the value: "))
  n6=int(input("Enter the value: "))
  multu=multiplication(n5,n6);
  print(multu)
  while(1):
    # print("enter value of m3\n")
    m3=int(input("Enter the value: "))
    multu=multu*m3
    print(multu)
    if (m3 == 0):
      break
  
elif (Operation == 4):
    
  # print("enter two numbers\n")
  n7=int(input("Enter the value: "))
  n8=int(input("Enter the value: "))
  divu=divide(n7,n8)
  print(divu)
  while(1):
    
    # print("enter value of m4\n")
    m4=int(input("Enter the value: "))
    divu=divu/m4;
    print(divu)
    if (m4 == 0):
      break
    
    
       
else :
  print("This is this")
        
#     case 5:
    
#         print("enter two numbers \n")
#     #scanf("%f %f",&n9,&N);
#       n9=int(input())
#       N=int(input())
#       per=percentage(n9,N);
#       print("%.2f%%\n",per)
#     break;
    
#     case 6:
    
#     print("enter a number\n")
#     scanf("%f",&n10);
    
#     sq=square(n10);
#     print("%.2f\n",sq)

        
#       break;
      
#       case 7:
      
#       print("enter a number\n")
#       scanf("%f",&n11);
      
#       cu=cube(n11);
#       print("%.2f",cu)
#       break;
      
#       case 8:
#       print("enter a number\n")
#       scanf("%f",&n12);
      
#       squrt=squareroot(n12);
#       printf("%.2f",squrt);
#       break;
      
#       case 9:
#       printf("enter a number\n");
#       scanf("%f",&n13);
      
#       cubrt=cuberoot(n13);
#       printf("%.2f",cubrt);
#       break;

#       case 10:
#       printf("enter a number\n");
#       scanf("%f",&n14);

#       logu=logarithm(n14);
#       printf("%f",logu);
#       break;
#     }
    
#     return 0;
        
    
# }