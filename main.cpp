#include <iostream>
#include <boost/shared_ptr.hpp>
using namespace std;
int main()
{
    boost::shared_ptr<int> a(new int(10));
    std::cout << *a << std::endl;

    cout << "this is the part i added by CLion" << endl;
    return 0;
}