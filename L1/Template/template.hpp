#include <cstddef>
#include <iostream>

template< typename T, int capacity = 200 >
class MyArray
{
public:
    MyArray();
    ~MyArray();
    void fill( const T& tRef );
    T* begin();
    T* end();
    T& operator[]( int i );
    size_t size();
    void print();

private:
    T privatArray_[ capacity ];
};

template< typename T, int capacity >
inline size_t MyArray< T, capacity >::size()
{
    return capacity;
}

template< typename T, int capacity >
inline void MyArray< T, capacity >::print()
{
    for ( auto& i: privatArray_ )
    {
        std::cout << i << "\n";
    }
}

template< typename T, int capacity >
inline void MyArray< T, capacity >::fill( const T& tRef )
{
    for ( auto& i: privatArray_ )
    {
        i = tRef;
    }
}

/**
 * @brief Return a pointer to the beginning of the array
 * @tparam T
 * @tparam capacity
 * @return T*
 */
template< typename T, int capacity >
inline T* MyArray< T, capacity >::begin()
{
    return &privatArray_[ 0 ];
}

/**
 * @brief Return a pointer to the end of the array
 * @tparam T
 * @tparam capacity
 */
template< typename T, int capacity >
inline T* MyArray< T, capacity >::end()
{
    return &privatArray_[ capacity ];
}

/**
 * @brief Operator for index access
 * @tparam i index
 * @return T&
 */
template< typename T, int capacity >
inline T& MyArray< T, capacity >::operator[]( int i )
{
    return privatArray_[ i ];

}
/**
 * @brief Construct a new My Array< T, capacity>:: My Array object
 * @tparam T
 * @tparam capacity
 */
template< typename T, int capacity >
inline MyArray< T, capacity >::MyArray() {};

/**
 * @brief Destroy the My Array< T, capacity>:: My Array object
 * @tparam T
 * @tparam capacity
 */
template< typename T, int capacity >
inline MyArray< T, capacity >::~MyArray() {};