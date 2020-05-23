#include <iostream>>

template<typename T, size_t N>
class myArray {
	
	T _internal[N];
public:
	size_t size() const {
		return N;
	}
	
};

int main()
{
	std::cout << "Test Github" << std::endl;

	return 0;
}