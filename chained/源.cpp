#include <iostream>

class Counter
{
private:
	int value;
public:
	Counter(int i)
	{
		value = i;
	}
	void display()
	{
		std::cout << value << std::endl;
	}
	Counter operator++(int)
	{
		Counter temp = *this;
		value += 1;
		return temp;
	}
};

int main()
{
	Counter c(5);
	c++.display();
	c.display();
	return 0;
}