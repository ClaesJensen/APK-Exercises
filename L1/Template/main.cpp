#include "freeFunctions.hpp"
#include "template.hpp"

#include <iostream>

int main( int argc, char const* argv[] )
{
    // Construction works
    MyArray< double, 20 > test;

    // Test if size() works
    std::cout << test.size() << "\n";

    // Test if print() works
    test.print();

    // Test if operator[] works
    test[ 0 ] = 1;
    test[ 20 ] = 2;

    // test if begin() works
    std::cout << "Beginning: " << *test.begin() << "\n";

    // test if end() works
    std::cout << "End: " << *test.end() << "\n";

    // Test if fill() works
    test.fill( 1 );
    test.print();

    // exercise 1 is done

    test[ 3 ] = 3;   // Assuming that 'my' has been appropriately allocated
                     // based MyArray

    // 1.3 exercise solution was to cast the int to a const double&
    std::cout << "Looking for '3'? "
              << ( myfind( test.begin(), test.end(), 3 ) != test.end()
                       ? "found"
                       : "sry no" )
              << std::endl;
    std::cout << "Looking for '4'? "
              << ( myfind( test.begin(), test.end(), 4 ) != test.end()
                       ? "found"
                       : "sry no" )
              << std::endl;

    // exercise 2 is done

    return 0;
}