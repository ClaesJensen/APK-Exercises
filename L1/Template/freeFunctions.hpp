
/**
 * @brief Return a pointer to the beginning of the array
 * @tparam T
 * @param first pointer of type T to the first element in the array
 * @param last  pointer of type T to the last element in the array
 * @param v element of type T to search for
 * @return T*
 */

// The function fails when taking a double array and searching for an int
// because the function is templated to take a pointer of type T and a
template< typename T >
T* myfind( T* first, T* last, const auto& v )
{
    // for loop to iterate through the array
    for ( auto i = first; i != last; ++i )
    {
        // if the element is found, return the index
        if ( *i == v )
        {
            return i;
        }
    }
    // if the element is not found, return the last index
    return last;
}