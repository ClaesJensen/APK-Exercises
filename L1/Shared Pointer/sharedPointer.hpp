

template< typename T >
class SharedPtr
{
public:
    SharedPtr( T* t );
    SharedPtr( const SharedPtr& sharedPointerRef );
    SharedPtr& operator=( const SharedPtr& );
    ~SharedPtr();

    T
}