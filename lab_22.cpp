#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int num1, num2, add, subtract, product;
   float divide;
 
   cout<<"\nEnter two numbers :";
   cin>>num1>>num2;

   add = num1 + num2;
   subtract = num1 - num2;
   product = num1 * num2;

   cout<<"\nSum = "<<add;
   cout<<"\nDifference = "<<subtract;
   cout<<"\nMultiplication = "<<product;
   
   if(num2 == 0)
   {
       cout<<"\nCant divide by zero";
   }     
   else
   {
       divide = num1 / (float)num2;  
       cout<<"\nDivision = "<< divide;
   }
    
   return 0;
}