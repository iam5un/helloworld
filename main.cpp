#include <iostream>
#include <boost/shared_ptr.hpp>

int main()
{
    boost::shared_ptr<int> a(new int(10));
    std::cout << *a << std::endl;

    return 0;
}