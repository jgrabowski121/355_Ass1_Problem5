//
// Justin Grabowski
// CS355
// Fall 2018
// November 13th 2018
// Instructor Ganchev G.
// main.cpp
// CS355Ass1_Problem5
// Language C++
//
// Purpose: This program tests operand evaluation order

#include <iostream>


int multiplyByTwo(short num);
int multiplyReffByTwo(short& num);
int multiplyNum1ByTwo();

static short num1 = 10;

int main(int argc, const char * argv[]) {
   
    
    // This section wiil test adding a variable with the result of a function
    
    std::cout << "Testing mutliplication in function with addition operator\n\n";
    
    std::cout << "Testing pass by value: \n";
    
    // Result should be 30
    std::cout << num1 + multiplyByTwo(num1) << std::endl;
    
    num1  = 10;
    
    // Result should be 30
    std::cout << multiplyByTwo(num1) + num1 << std::endl;
    
    num1  = 10;
    
    //-------------------------

    // Should be 30
    std::cout << "\n\nTesting pass by reference: \n";
    std::cout << num1 + multiplyReffByTwo(num1) << std::endl;
    
    num1 = 10;
    
    // Should be 30
    std::cout << multiplyReffByTwo(num1) + num1 << std::endl;
    
    num1 = 10;
    
    //-------------------------
    
    // Should be 30
    std::cout << "\n\nTesting no parmeters: \n";
    std::cout << num1 + multiplyNum1ByTwo()<< std::endl;
    
    num1 = 10;
    
    // Should be 30
    std::cout << multiplyNum1ByTwo() + num1 << std::endl;
    
     // This section wiil test subtracting a variable from the result of a function and
    //   vice versa
    std::cout << "Testing mutliplication in function with subtraction operator\n\n";
    
    // Should be -10
    std::cout << "Testing pass by value: \n";
    std::cout << num1 - multiplyByTwo(num1) << std::endl;
    
    num1  = 10;
    
    // Should be 10
    std::cout << multiplyByTwo(num1) - num1 << std::endl;
    
    num1  = 10;
    
    //-------------------------
    
    // Should be -10
    std::cout << "\n\nTesting pass by reference: \n";
    std::cout << num1 - multiplyReffByTwo(num1) << std::endl;
    
    num1 = 10;
    
    // Shold be 10
    std::cout << multiplyReffByTwo(num1) - num1 << std::endl;
    
    num1 = 10;
    
    //-------------------------
    
    // Should be -10
    std::cout << "\n\nTesting no parmeters: \n";
    std::cout << num1 - multiplyNum1ByTwo()<< std::endl;
    
    num1 = 10;
    
    // Should be 10
    std::cout << multiplyNum1ByTwo() - num1 << std::endl;
   
    
    //-------------------------
    
    std::cout << "Testing mutliplication in function with division operator\n\n";
    
    // Should be .5
    std::cout << "Testing pass by value: \n";
    std::cout << (double)(num1 / multiplyByTwo(num1)) << std::endl;
    
    num1  = 10;
    
    // Should be 2
    std::cout << ((double)multiplyByTwo(num1) / num1) << std::endl;
    
    num1  = 10;
    
    //-------------------------
    
    // Should be .5
    std::cout << "\n\nTesting pass by reference: \n";
    std::cout << (double)(num1 / multiplyReffByTwo(num1)) << std::endl;
    
    num1 = 10;
    
    // Should be 2
    std::cout << (double)(multiplyReffByTwo(num1) / num1) << std::endl;
    
    num1 = 10;
    
    //-------------------------
    
    // Should be .5
    std::cout << "\n\nTesting no parmeters: \n";
    std::cout << (double)(num1 / multiplyNum1ByTwo())<< std::endl;
    
    num1 = 10;
    
    // Should be 2
    std::cout << (double)(multiplyNum1ByTwo() / num1) << std::endl;
    
    return 0;
}
// modifies num1
int multiplyNum1ByTwo()
{
   return num1 *= 2;
}

int multiplyByTwo(short num)
{
    return num *= 2; // must return for cout
}

int multiplyReffByTwo(short& num)
{
    return num *= 2; // must return for cout
}

