// Cpplinkedin.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <set>
#include<string>
#include "cow.h"

#define CAPACITY 5000

using namespace std;

//STRUCTURE
//struct cow
//{
//    string name;
//    int age;
//    unsigned char purpose;
//
//};

//CLASSES
//class cow
//{
//public:
//    cow(string name_i, int age_i, unsigned char purpose_i) 
//    {
//        name = name_i;
//        age = age_i;
//        purpose = purpose_i;
//    }
//
//    cow() = default;
//
//    string get_name() { return name; }
//    int get_age() { return age; }
//    unsigned char get_purpose() { return purpose; }
//
//    void set_age(int  new_age) { age = new_age; }
//
//public:
//    string name;
//    int age;
//    unsigned char purpose;
//
//};
//
////ENUMERATION
//// https://www.programiz.com/cpp-programming/enumeration
////By default, milk is 0, dairy is 1 
//enum cow_purpose { milk, dairy };

//You can change the default value of an enum element during declaration (if necessary).
enum season
{
    spring = 0,
    summer = 4,
    autumn = 8,
    winter = 12
};

int main()
{
   cout << "Hello Sagar Mahajan\n";
   
   cow mycow("s", 23, 'a');

   cout << mycow.get_age() << endl;



}

void keyword()
{

    //signed vs unsigned Integer 
    //    https ://www.ibm.com/docs/en/aix/7.2?topic=types-signed-unsigned-integers

    //1. auto keyword 
    /*
    The auto keyword specifies that the type of the variable that is being declared will be automatically deducted from 
    its initializer. In the case of functions, if their return type is auto then that will be evaluated by return type
    expression at runtime. Good use of auto is to avoid long initializations when creating iterators for containers.   

    Note: The variable declared with auto keyword should be initialized at the time of its declaration only or else 
    there will be a compile-time error. 
    */

    auto x = 4;
    auto y = 3.37;
    auto ptr = &x;

    cout << x << y << ptr;

    //2. typeid KEYWORD
    /*
    Typeid is an operator which is used where the dynamic type of an object needs to be known. 
    typeid(x).name() returns the data type of x, for example, it return ‘i’ for integers, ‘d’ for doubles, 
    ‘Pi’ for the pointer to integer etc. But the actual name returned is mostly compiler dependent. 
    */

    cout << typeid(x).name() << endl
        << typeid(y).name() << endl
        << typeid(ptr).name() << endl;

    //REFRENCE: https://www.geeksforgeeks.org/type-inference-in-c-auto-and-decltype/

}

void preprocessor_directive() 
{
    //REFERENCE https://www.geeksforgeeks.org/cc-preprocessors/

    /*
    As the name suggests Preprocessors are programs that process our source code before compilation. 

    It is also called as macros
    https://www.geeksforgeeks.org/macros-and-its-types-in-c-cpp/#:~:text=A%20macro%20is%20a%20piece,semi%2Dcolon(%3B).

    Note: directives do not end with semicolon

    1. include directive

    Example of directives arer: include => it is used to insert the referenced file.
    #include <iostream> -> it included iostream file thus it doesnt
    #include <cstdint> -> It include c livrary code files

    2. define directive

    #define CAPACITY 5000 -> All the preprocessor find the constant capacity and replace it with 5000


    */

    int32_t large = CAPACITY;
    uint8_t small = 37;
    large += small;
    cout << "The valure of large is" << large << endl;
    

    /*
    3. ifdef directive -> if defined AND IT ENDS WITH #ENDIF DIRECTIVES
    
    */

    #ifdef DEBUG
    COUT << "iF debug MACROS IS DEFINED IT WILL RPINT THIS"<<ENDL;

    #endif


}

void structure_enum_call() 
{
    cow mycow;
    mycow.age = 5;
    mycow.name = "abc";
    mycow.purpose = dairy;
    cout << mycow.purpose << endl;

}

void class1() 
{
    //CLASSES
    //BY default classes are private
    /*
    Classes consist of two members
    1. Data
    2. Function
    
    to access data member froma class we use GETTERS and SETTERS

    SETTERS write into data members
    GETTERS return their values

    Example:
    class cow
    {
    public:
        cow(string name_i, int age_i, unsigned char purpose_i) 
        {
            name = name_i;
            age = age_i;
            purpose = purpose_i;
        }

        cow() = default;

        string get_name() { return name; }
        int get_age() { return age; }
        unsigned char get_purpose() { return purpose; }

    private:
        string name;
        int age;
        unsigned char purpose;

    };

    //main code
    cow mycow("s", 23, dairy);

   cout << mycow.get_age() << endl;
   why its unaccessible


    //CONSTRUCTOR
    IT is called when object is crested , its name must be same as the class name and 
    it also dont return any value

    */



    /*
    IF class is not defined as public then 
       cow mycow;
       mycow.age = 5;
       mycow.name = "abc";
       mycow.purpose = autumn;
       cout << (int)mycow.purpose << endl;

       It will show the error
    */

    //ENCAPSULATION: It Hiding the data from all world



}

void references() 
{
    /*
    References are nnot pointers and not objects.
    also it doesnt have adresses
    There are not arrays of refernces
    There are no pointers to references
    
      POINTERS                             VS                             REFERENCES
    1.Initialization is optional                        Initialization is not optional 
    2.Can point to differnet objects                    Cannot point to differnet objects
    3.Can be void or null                               Cannot be void or null
    4.Multiple level of indirection                     SIngle level of indirection
    5. it need to be derefenced                         no need

    */



}

void guards() {
//https://www.geeksforgeeks.org/include-guards-in-c/
}

void pragma() 
{
//https://www.geeksforgeeks.org/pragma-directive-in-c-c/
}

void passbyvaslueandpassbyreferences() {
//https://www.geeksforgeeks.org/functions-in-c/

    /*
    * 
    * However, in C, we can use pointers to get the effect of pass-by reference. For example, consider the below program.
    The function fun() expects a pointer ptr to an integer (or an address of an integer). It modifies the value at the address ptr. 
    The dereference operator * is used to access the value at an address. In the statement ‘*ptr = 30’, value at address ptr is changed to 30. 
    The address operator & is used to get the address of a variable of any data type. In the function call statement ‘fun(&x)’,
    the address of x is passed so that x can be modified using its address.
        * 
        # include <stdio.h>
    void fun(int *ptr)
    {
	    *ptr = 30;
    }

    int main()
    {
    int x = 20;
    fun(&x);
    printf("x = %d", x);

    return 0;
    }

    
    */
}