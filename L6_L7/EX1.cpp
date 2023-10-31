#include <iostream>

// Create a simple variadic template function that returns the sum of all input
// paramters Example: sum(1, 2, 3, 4, 5) = 15

template< typename T >
T sumOfArgs( T arg )
{
    return arg;
}

template< typename T, typename... Args >
T sumOfArgs( T arg, Args... args )
{
    return arg + sumOfArgs( args... );
}

int main()
{
    auto myTestSum = sumOfArgs( 1, 2, 3, 4, 5, 6, 10, 10, 10000 );
    std::cout << myTestSum << std::endl;
    return 0;
}