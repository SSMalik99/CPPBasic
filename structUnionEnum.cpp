#include<iostream>

using namespace std;

/*
    struct ---> to use different type of datatype in same varibale
*/
// struct myVariable{
//     int id;
//     char favChar;
//     float salary;
// };

// typedef struct myVariable{
//     int id;
//     char favChar;
//     float salary;
// }myVariable;

// Union are same as struct but the difference is that it will provide better memory management 
// its mean that if out of the may varible we just want to use one then we can use union and if we declare new from the union for one variable then it will override the previous one  

/**
 *note :: 
    We can only use 1 variable at a time otherwise the compiler will give us a garbage value
    The compiler chooses the data type which has maximum memory for the allocation. 
 */
// union member{
//     int id;
//     char favChar;
//     float salary;
// };


// enum are just custom datatype to make our code more readable nothing else... 
// AN datatype of meal is defined and we can use this to compare whether the given meal is which type
// let's in the code
enum Meal{breakfast, lunch, dinner};

int main(){
    // struct myVariable firstCustomVari = {12, 'g', 876.77 };
    // struct myVariable firstCustomVari = {0};//to set all values 0
    // cout<<"ID is"<<firstCustomVari.id<<endl;
    // cout<<"Name is"<<firstCustomVari.favChar<<endl;
    // cout<<"Salary is"<<firstCustomVari.salary<<endl;

    // Set one by one
    // struct myVariable firstCustomVari;
    // firstCustomVari.id = 123;
    // firstCustomVari.favChar = 'f';
    // firstCustomVari.salary = 677.8;
    // cout<<"ID ="<<firstCustomVari.id<<endl;
    // cout<<"Character = "<<firstCustomVari.favChar<<endl;
    // cout<<"Salary = "<<firstCustomVari.salary<<endl;

    // with typedef  no need to write struct
    // myVariable firstCustomVari;
    // firstCustomVari.id = 123;
    // firstCustomVari.favChar = 'f';
    // firstCustomVari.salary = 677.8;
    // cout<<"ID ="<<firstCustomVari.id<<endl;
    // cout<<"Character = "<<firstCustomVari.favChar<<endl;
    // cout<<"Salary = "<<firstCustomVari.salary<<endl;

    // union in C++

    // union member m1;
    // m1.id = 333;
    // cout<<"Member union id = "<<m1.id<<endl;
    // m1.favChar = 'f';
    // cout<<"Memeber favChar = "<<m1.favChar<<endl;
    // cout<<"Memeber id = "<<m1.id<<endl;//now it will provide garbage value because only one of the parameter fo the union can be used at a time.
    // m1.salary = 76678;
    // cout<<"Memeber salary = "<<m1.salary<<endl;
    // cout<<"Memeber favChar = "<<m1.favChar<<endl; // will provide garbage value
    // cout<<"Memeber id = "<<m1.id<<endl; // will provide garbage value
    
    /*
    output::
        Member union id = 333
        Memeber favChar = f
        Memeber id = 358
        Memeber salary = 76678
        Memeber favChar =
        Memeber id = 1200997120
    */

    // Meal m1 = breakfast;
    // Meal m2 = lunch;
    // Meal m3 = dinner;
    // cout<<"Meal m1 = "<<m1<<endl;
    // cout<<"Meal m2 = "<<m2<<endl;
    // cout<<"Meal m3 = "<<m3<<endl;
    
    // Don't know what i'm doing will discuss further in the more steps lets move on
    // char userMeal[40];
    // cout<<"Enter what you want to have"<<endl;
    // cin>>userMeal;
    // if(userMeal == ){
    //     cout<<"User Demanding for the breakfast";
    // }
    // cout<<"Meal entered by the user : "<<userMeal<<endl;



    return 0;

}
