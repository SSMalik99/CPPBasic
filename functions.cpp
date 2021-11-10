#include<iostream>

// Function is to break our content in the segments
// type functionName(araguments); //function prototype means declaring a funciton 
using namespace std;

// int sum(int a, int b);
// void goodMorning(void) //OR
// void goodMorning();

// void swapWithPointer(int *a, int *b);
// void swapWithReference(int &a, int &b);

// This will return a reference
// int &swapWithReferenceAndSendReferecne(int &a, int &b);

// inline fucntions :: functions which has very much low code then we can use inline funcitons
// What actually compiler do with this inline fucntion : compiler will replace the fuction call with the body of the function 
// inline int inlineSum(int a, int b){
//     return a*b;
// }

// When not to make a funciton an inline function 
/*
common factor : 
    1) when function is not recursive
    2) whren function is not using static variable 
    3) when fucntio has code much more than the inline view...

    static variable in function 
    static variable are those variable which will be stored in the memory for the function 
    suppose the below example if function calls once then value of a will be 1 and after the call its value will be a+1 that is 2 and then 2 will be its value for next time and when we call it again it will use a = 2 and again then it will increase and save for the variable....
    int myFun(){
        static int a = 1;
        a =a+1;
    }

*/


/*
default parameter are which are not neccessary to pass to the fuction just like rate in the below funciton
int myFunction(int money , int rate =2){
    return money*rate;
}
*/

/*
constant parameter :: 
    sometime we don't want to change our varibales when passing to the function so we can use const parameter in the funciton as below
    int myFunc(const char *p){
        // do things
    }
*/

// recurssivve function
// int myFactorial(int n){
//     if(n == 0 || n == 1){
//         return 1;
//     }
//     return n * myFactorial(n-1);
// }

// We can find nth term of the myFib but it is an overhead cause its call so many time the recurrssion 
// So use recurrssive intelligently 
// int myFib(int n){
    
//     if(n<2){
//         return 1;
//     }
//     return myFib(n-2) + myFib(n-1);
// }


/*
C++ allows us to use polymorphism ---> same vthing can be use with different purpose
overloading ---> means using same thing for different purpose...
Function Overloading::
using a function for muliple purpose
OR 
Function for same name used for different purpose

*/
// int sum(int a, int b){
//     return a+b;
// }
// int sum(int a, int b, int c){
//     return (a+b+c);
// }

int main(){
    
    // int num1 = 2, num2 = 4;//actual parameter
    // cout<<"Sum of "<<num1<<" and "<<num2<<" = "<<sum(num1, num2)<<endl;
    // goodMorning();

    // int num1 = 2, num2 = 4;
    // // Way with C language
    // cout<<"Before swaping num1 = "<<num1<<" and num2 = "<<num2<<endl;
    // swapWithPointer(&num1, &num2);
    // cout<<"After swaping num1 = "<<num1<<" and num2 = "<<num2<<endl;
    /*
    output::
        Before swaping num1 = 2 and num2 = 4
        After swaping num1 = 4 and num2 = 2
    */

    // int num1 = 2, num2 = 4;
    // // Way with C++ reference variable
    // cout<<"Before swaping With Reference num1 = "<<num1<<" and num2 = "<<num2<<endl;
    // swapWithReference(num1, num2);
    // cout<<"After swaping With Reference num1 = "<<num1<<" and num2 = "<<num2<<endl;
    // /*
    // output:
    //     Before swaping With Reference num1 = 2 and num2 = 4
    //     After swaping With Reference num1 = 4 and num2 = 2
    // */

    // Change value of a number with referance
    // int num1 = 2, num2 = 4;
    // cout<<"Before swaping With Reference num1 = "<<num1<<" and num2 = "<<num2<<endl;
    // // Let we will send reference of num1 from the function so after function call value of the num1 will be equal to the 500 as given in the right side of the function call
    // swapWithReferenceAndSendReferecne(num1, num2) = 500;
    // cout<<"After swaping With Reference num1 = "<<num1<<" and num2 = "<<num2<<endl;
    /* 
    output:
        Before swaping With Reference num1 = 2 and num2 = 4
        After swaping With Reference num1 = 500 and num2 = 2
    */

//    factorial of a number
    // int num;
    // cout<<"Enter nuber to find factorial"<<endl;
    // cin>>num;
    // cout<<"Factorial of "<<num<<" = "<<myFactorial(num);

    // Fibonaci series number
    // int num;
    // cout<<"Enter number you want to find the fibonacci"<<endl;
    // cin>>num;
    // cout<<"Element at "<<num<<" = "<<myFib(num);


    // int num1 = 22, num2 = 33, num3 =55;
    // cout<<"Sum of 2 numbers = "<<sum(num1, num2)<<endl;
    // cout<<"Sum of 3 numbers = "<<sum(num1, num2, num3)<<endl;

    return 0;

}

// swap and send refence of the variable
// int &swapWithReferenceAndSendReferecne(int &a, int &b){
//     int temp = a;
//     a = b;
//     b = temp;
//     return a;
// }

// C++ way
// void swapWithReference(int &a, int &b){
//     int temp = a;
//     a = b;
//     b = temp;
// }

// C language way
// to swap we need to send address of the variables thats mean we need to call function by reference
// void swapWithPointer(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int sum(int a, int b){
//     int c = a + b;//formal parameter
//     return c;
// }

// void goodMorning(){
//     cout<<"Good Morning dear"<<endl;
// }

