// first main function
#include <stdio.h>
#include <iostream>
#include <fstream>

struct Vector2D
{
	int x;
	int y;
	void print()
	{
		printf("%d %d \n", x, y);
	}
};

std::ostream &operator << (std::ostream &stream, Vector2D obj)
{
	stream << obj.x << " " << obj.y << std::endl;
	return stream;
}

void main()
{
	Vector2D my_vector;

	my_vector.x = 1;
	my_vector.y = 2;

	FILE *ts = fopen("cstyle.txt", "w");

	fprintf(ts, "%d %d", my_vector.x, my_vector.y);

	fclose(ts);

	//my_vector.print();


	//printf("Hello, World! \n");

	//std::cout << "This is c++ style!" << std::endl;

	//cout << my_vector.x << " " << my_vector.y << endl;

	std::cout << my_vector << std::endl;

	std::ofstream tscpp("cppstyle.txt");
	tscpp << my_vector << std::endl;

}