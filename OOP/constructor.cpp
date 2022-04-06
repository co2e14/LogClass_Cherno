#include <iostream>

class Entity
{
public:
	float X, Y;

	// this is the constructor, called every time this class is instanced
	Entity()
	{
		X = 0.0f;
		Y = 0.0f;
		std::cout << "Created" << std::endl;
	}

	Entity(float x, float y)
	{
		Y = y;
		X = x;
	}

	~Entity()
	{
		std::cout << "Destroyed" << std::endl;
	}

	void Print()
	{
		std::cout << X << ", " << Y << std::endl;
	}
};

void Function()
{
	Entity e;
	e.Print();
}

int main()
{
	Function();
	std::cin.get();
}