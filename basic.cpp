#include<iostream> //header file => input output lene dene mein help krti hai and many more things it just a starting point
#include<iomanip>

using namespace std;//if this is not included then we have to use std::cout<< instaed cout<< Hope you get the touch mr bubby....

/*
variable in the c++
local and variable scope...
local and global variable names can be same futher check in programmin

Datatypes in c++
built in ---> int, float, char, double, boolean
user defined ---> struct, union, enum
derived ---> array, function, pointer


// Input output stream ---> means flow of data in or out in sequence of bytes or bits

"<<" is called insertion operator (insertion of output to the screen)
">>" is called extraction operator (extract value from user) 



header files ----> we have mainly two type of header files
System header file ===> that comes with the compiler
#include<iostream> 

user defined header ===> that are written by the programmer
how to include user defined files
#include "fileName.h" // so we need to store custom header files with the extension of .h

referance sites :: https://en.cppreference.com/w/cpp/header
*/
int c = 8;

int main(){
    
    // variables
    // int a =5, b =9;
    // float pi = 3.14;
    // char letter = 'a';
    // int glo =9; 
    // bool is_true = false;
    // // Local and global varibal can be same but preferance will be given to the local variable.
    // cout<<"Hello dear\n"<<"value of a = "<<a<<"and value of b = "<<b<<"\n value of pi ="<<pi<<"\n";
    // cout<<glo;
    // cout<<"\nBoolean value = "<<is_true;

    // Basic input output in c++
    // int num1, num2;
    // cout<<"Enter value of numebr 1 :";
    // cin>>num1;
    // cout<<"Enter value of numbr 2 :";
    // cin>>num2;
    // cout<<"Sum = "<<num1+num2;

    // Operatores in c++
    cout<<"operatores in C++"<<endl;//endl is predefined 

    // artitmatic operations
    // int a=8, b =2;
    // cout<<"value of a+b = "<<a+b<<endl;
    // cout<<"value of a-b = "<<a-b<<endl;
    // cout<<"value of a*b = "<<a*b<<endl;
    // cout<<"value of a/b = "<<a/b<<endl;
    // cout<<"value of a%b = "<<a/b<<endl;
    // cout<<"value of ++a = "<<++a<<endl;
    // cout<<"value of --a = "<<--a<<endl;
    // cout<<"value of a++ = "<<a++<<endl;
    // cout<<"value of a-- = "<<a--<<endl;

    // assignment operators
    // int x = 5, y = 9;

    // comparison operators
    // int a=8, b =2;
    // cout<<"value of a>b = "<<(a>b)<<endl;
    // cout<<"value of a<b = "<<(a<b)<<endl;
    // cout<<"value of a==b = "<<(a==b)<<endl;
    // cout<<"value of a!=b = "<<(a!=b)<<endl;
    // cout<<"value of a%b = "<<(a>=b)<<endl;
    // cout<<"value of ++a = "<<(a<=b)<<endl;
    
    // Logical operators
    // int a=8, b =2;
    // cout<<"value of && "<<((a>b) && (a==b))<<endl;
    // cout<<"value of || "<<((a<b) || (a<10))<<endl;
    // cout<<"value of ! "<<!(a==b)<<endl;
    
    
    // Referance variable and type Casting
    // int a, b, c;
    // cout<<"Enter value of a = ";
    // cin>>a;
    // cout<<"Enter value of b = ";
    // cin>>b;
    // c = a + b;
    // cout<<"Value of c locally = "<<c<<endl;
    // cout<<"Value of c gloabally = "<<::c<<endl;// "::" scope resolution operator to access the global varible
 
    // Float double and long double literals
    
    // By default 34.4 is of type doble in c++ not float type 
    // We can modify these means in which format we want to use these numbers 
    // for example  34.4 is "double"  (34.4f OR 34.4F) are of float type (34.4l OR 34.4L) is of type long double 
    // By default float is of type double...
    // double myDoubleFloat = 34.4;
    // long double myLongDoubleFloat = 34.4;
    // float myFloat = 34.4;

    // cout<<"size of 34.4 = "<<sizeof(34.4)<<endl; // 8
    // cout<<"size of 34.4f = "<<sizeof(34.4f)<<endl; // 4
    // cout<<"size of 34.4F = "<<sizeof(34.4F)<<endl; // 4
    // cout<<"size of 34.4l = "<<sizeof(34.4l)<<endl; // 12
    // cout<<"size of 34.4L = "<<sizeof(34.4L)<<endl; //12

    // Referance variable ::: sometimes we want to refer one value or varible with multiple variables then we use these reference variable to define them..
    // int a = 8983;
    // int &b = a;
    // int & c = b;
    // cout<<"Value of a = "<<a<<endl;
    // cout<<"Value of b = "<<b<<endl;
    // cout<<"Value of c = "<<c<<endl;

    // Typecasting int C++
    // int a = 45;
    // float b = 45.5;
    // cout<<"Value of (int)a = "<<(int)a<<endl; // 45
    // cout<<"Value of int(a) = "<<int(a)<<endl; // 45
    // cout<<"Value of int(b) = "<<int(b)<<endl; // 45
    // cout<<"Value of (float)a = "<<(float)a<<endl; // 45
    // cout<<"Value of float(a) = "<<float(a)<<endl; // 45
    // cout<<"Value of float(b) = "<<float(b)<<endl; // 45.5

    // Constants, Manipulators & Operator Precedence 
    // Constants
    // constant whose value will never be cange if these are defined onece...
    // const float pi = 3.14;
    // cout<<"Value of Pi = "<<pi<<endl;
    // pi = 4.555; //error: assignment of read-only variable 'pi'

    // Manipulators :: some times we want to cange output or other values of result then we will use these manipulators in our code one example of these
    // manipulators is "endl" c++ manipulators are defined under the header file <iomanip>
    // lets we also "setw" manipulator 
    // int a = 5, b= 44, c = 555, d = 4566;
    // cout<<"Value without setw = "<<a<<endl;
    // cout<<"Value without setw = "<<b<<endl;
    // cout<<"Value without setw = "<<c<<endl;
    // cout<<"Value without setw = "<<d<<endl;
    // /*
    // Value without setw = 5
    // Value without setw = 44
    // Value without setw = 555
    // Value without setw = 4566
    // */
    // cout<<"Value with setw = "<<setw(4)<<a<<endl;
    // cout<<"Value with setw = "<<setw(4)<<b<<endl;
    // cout<<"Value with setw = "<<setw(4)<<c<<endl;
    // cout<<"Value with setw = "<<setw(4)<<d<<endl;
    // /*
    // Value with setw =    5
    // Value with setw =   44
    // Value with setw =  555
    // Value with setw = 4566
    // */
    
    // Operator Precedence & Operator Associativity
    /*
    precedence mean in which order C++ will perform artihmetics operation and other operation
    associativity means in which format C++ will perform operation if two operators has same precedence
    so we associativity may be left to right or right to left...
    this concept is same as the C language
    */
    /*
    Control structures in C++
    sequence structure :: simple entry--->action1-->action2->>>>and son on ---> output..
    selection structure :: entry--> conditions--> action1 OR action2 -->>> or so on ->> output
    loop structure :: entry--->loop-->condtion--->loop--->condition--->output...
    */
    // int age ;
    // cout<<"Tell me you age"<<endl;
    // cin>>age;

    // if(age < 30){
    //     cout<<"Age is lower than 30 age ="<<age<<endl;
    // }else{
    //     cout<<"Age is greater than 30 age ="<<age<<endl;
    // }

    // switch (age)
    // {
    // case 30:
    //     cout<<"valid fro 30 Age ="<<age<<endl;
    //     break;
    // case 33:
    //     cout<<"valid for 33 Age = "<<age<<endl;
    //     break;
    // case 35:
    //     cout<<"valid for 35 Age = "<<age<<endl;
    //     break;
    // default:
    //     cout<<"Given age is not valid age = "<<age<<endl;
    //     break;
    // }

    // loop in the c++
    // for(int i = 0; i<5; i++){
    //     if(i == 2){
    //         cout<<"Continue this"<<endl;
    //         continue;
    //     }        
    //     if(i==4){
    //         cout<<"break this"<<endl;
    //         break;
    //     }

    //     cout<<i<<endl;
    // }
    // bool clock = true;
    // int i = 0;
    // while(clock){
    //     cout<<i<<endl;

    //     if(i>3 && i<5){
    //         cout<<"Continue this"<<endl;
    //     }
    //     if(i>=10){
    //         cout<<"Break this"<<endl;
    //         break;
    //     }
    //     if(i==8){
    //         cout<<"Break this loop with false statement"<<endl;
    //         clock = false;
    //     }
    //     i++;
    // }

    // bool clock = false;
    // int i = 0;
    // do{
    //     cout<<"I'll run atleast once"<<endl;
    //     i++;
    // }while(clock);


    // Pointer are also same things which are described in the  C language
    // "&" is called "address of"  operator
    // "*" is called "value of" operator
    // lets do with some programming
    // int myValue = 45;
    // int * valueAddress = &myValue;
    // int ** adressOfAdressOfValue = &valueAddress;
    // cout<<"Main Value of myValue = "<<myValue<<endl;
    // cout<<"Address of Main Value of &myValue = "<<&myValue<<endl;
    // cout<<"Address of Main Value of valueAdress = "<<valueAddress<<endl;
    // cout<<"Address of  valueAdress = &valueAddress = "<<&valueAddress<<endl;
    // cout<<"Address of  valueAdress = adressOfAdressOfValue = "<<adressOfAdressOfValue<<endl;
    // cout<<"Value stored at the **adressOfAdressOfValue = "<<**adressOfAdressOfValue<<endl;
    // cout<<"Value stored at the *valueAddress = "<<*valueAddress<<endl;
    // cout<<"main value = "<<myValue<<endl;

    /*
    Main Value of myValue = 45
    Address of Main Value of &myValue = 0x61feb8
    Address of Main Value of valueAdress = 0x61feb8
    Address of  valueAdress = &valueAddress = 0x61feb4
    Address of  valueAdress = adressOfAdressOfValue = 0x61feb4
    Value stored at the **adressOfAdressOfValue = 45
    Value stored at the *valueAddress = 45
    main value = 45
    */



    // <<<<<<<<<<<<<<<<<<<----------------- Array ----------------->>>>>>>>>>>>>>>>>>
    // int myArray[4] = {1,2,3,4};
    // cout<<"Value at 0 index = "<<myArray[0]<<endl;
    // cout<<"Value at 1 index = "<<myArray[1]<<endl;
    // cout<<"Value at 2 index = "<<myArray[2]<<endl;
    // cout<<"Value at 3 index = "<<myArray[3]<<endl;

    // another way to make array is using pointer
    // int myArray[4] = {1,2,3,4};
    // int *pointer = myArray;
    // cout<<"with pointer Value at(*pointer) index0 = "<<*pointer<<endl;
    // cout<<"with pointer Value at(*pointer+1) index1 = "<<*(pointer +1)<<endl;
    // cout<<"with pointer Value at(*pointer+2) index2 = "<<*(pointer+2)<<endl;
    // cout<<"with pointer Value at(*pointer+3) index3 = "<<*(pointer+3)<<endl;
    // *pointer = &myArray[0] = myArray

    return 0;
}