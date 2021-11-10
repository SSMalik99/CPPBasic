#include<iostream>
#include<string>
// Class name should be start with the capital letter not necessary
using namespace std;
// ...Just a basic touch for the things...

// Class is actually an extention of structures as structures can't be private and function can't be used insid the structures
/*
class ClassName{
    // code 
} object1, object2,...;
is a valid syntax
*/
// class FirstClass
// {
//     private:
//         int a, b, c;
//     public:
//         int d, e;
//         void setData(int num1, int num2, int num3);//decalare here define outside the class to continue the readability
//         void getData();
// };

// // Special format to define function outside the class
// void FirstClass :: setData(int num1, int num2, int num3){
//     a = num1;
//     b = num2;
//     c = num3;
// }
// void FirstClass::getData(){
//     cout<<"Value of a = "<<a<<endl;
//     cout<<"Value of b = "<<b<<endl;
//     cout<<"Value of c = "<<c<<endl;
//     cout<<"Value of d = "<<d<<endl;
//     cout<<"Value of e = "<<e<<endl;
// }

// Nesting member function when a member function of class uses another function is called nesting member function

// class Binary{
//     // These will be private by default
//     // string s;
//     // void check_binary(void);
//     private:
//         string s;
//         void check_bin(void);
//     public:
//         void take_binary(void);
//         void binary_complement(void);
//         void display_binary(void);
// };
// // For this example we will use string functins so we need to include <string>
// void Binary :: check_bin(void){
//     for(int i = 0; i < s.length() ; i++){
//         if(s.at(i) != '0' && s.at(i) != '1'){
//             cout<<"Please enter a valid binary format"<<endl;
//             exit(0);
//         }
//     }
// }
// void Binary :: take_binary(void){
//     cout<<"Enter Binary number"<<endl;
//     cin>>s;
    
// }
// void Binary :: binary_complement(void){
//     check_bin(); // this is called nesting of the member function 
//     for(int i = 0; i < s.length() ; i++){
//         if(s.at(i) == '0'){
//             s.at(i) = '1';
//         }else{
//             s.at(i) = '0';
//         }
//     }
// }

// void Binary :: display_binary(void){
//     check_bin();
//     cout<<"Your binary number : ";
//     for(int i =0; i < s.length() ; i++){
//         cout<<s.at(i);
//     }
//     cout<<endl;
// }


/*
imformation :: 
how memory is adjusted in the objects of the class
well varible of the class are declared differntly for the different object so memory is for each variable for the class object is different
But for member funcitons all the object will share copy of the member funciton and no need to allocate memory for the different variable if we want to make a variable available specially for the class then we have to make it static 
so next will be static data member( static variables of the class) and the static function of the class

*/

int main(){
    // FirstClass firstObject;
    // firstObject.d = 53;
    // firstObject.e = 55;
    // firstObject.setData(33, 44, 55);
    // firstObject.getData();

    // Binary firstBinary;
    // firstBinary.take_binary();
    // firstBinary.display_binary();
    // firstBinary.binary_complement();
    // firstBinary.display_binary();

    return 0;

}
