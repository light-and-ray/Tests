//print как в питоне
#include <iostream>

template <typename Arg>
void print(Arg arg)
{
	std::cout << arg << '\n';
}

template <typename Arg, typename... Args>
void print(Arg arg, Args... args)
{
	std::cout << arg << ' ';
	print(args...);
}

class A
{
protected:

	int t = 10;

public:


	void f()
	{
		struct B
		{
			void g()
			{
				print(t); //using t
			}
		};
		B b;
		b.g();
	}
};

int main()
{
	print(1, 5, 6);
}