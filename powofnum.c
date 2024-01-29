#include<stdio.h>                  // header file standard I/O       
#include<math.h>                   // math header file
int main()
{
long val, power, result;                  // variabel decleration
printf("Enter number:\n");              // print statment
scanf("%d",&val);                        // input base number 
printf("enter power value:\n");          // print statement
scanf("%d",&power);                      // input power value
if(power==2)
{
    result=val*val;                      // while calculating square
}
else{
result=pow(val,power);      }               //result calculation
printf("enter power value:%d \n",result);  //print final result


}
