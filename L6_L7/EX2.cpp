#include <iostream>
#include <string>

void ya_printf( const char *s )
{
    while ( *s )
    {
        if ( *s == '%' )
        {
            if ( *( s + 1 ) == '%' )
            {
                ++s;
            }
            else
            {
                throw std::runtime_error(
                    "invalid format string: missing arguments" );
            }
        }

        std::cout << *s++;
    }
}

template< typename T, typename... Args >
void ya_printf( const char *s, T value, Args... args )
{
    while ( *s )
    {
        if ( *s == '%' )
        {
            if ( *( s + 1 ) == '%' )
            {
                ++s;
            }
            else
            {
                std::cout << value;
                ya_printf( s + 1, args... );
                return;
            }
        }
        std::cout << *s++;
    }
    throw std::logic_error( "extra arguments provided to printf" );
}

int main()
{
    // if constexr ()
    return 0;
}