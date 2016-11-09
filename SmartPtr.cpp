#include<boost/shared_ptr.hpp>

int main()
{
	boost::shared_ptr<int> ptrNum(new int(10));
	
	return 0;
}