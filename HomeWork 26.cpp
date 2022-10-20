#include <iostream>
#include <string>


void add_width(int** example, int which)
{
	example[which] = new int[10];
}


void delete_width(int** example, int which)
{
	delete[] example[which];
}


int pres = 0;
auto create_arr(std::string** third_example, int allcontacts, int i = 0)
{
	for (; i < allcontacts; i++)
		third_example[i] = new std::string[2];
}


auto input_arr(std::string** third_example)
{
	std::string name, number;
	std::cout << "Name : ";
	std::cin >> name;
	std::cout << "Number : ";
	std::cin >> number;

	third_example[pres][0] = name;
	third_example[pres++][1] = number;
}


auto search_arr(std::string** third_example)
{
	int which;
	std::cout << "What do you want to search ?\n";
	std:cout << "1.Name\n";
	std:cout << "2.Number\n";


	if (which == 1)
	{
		std::cout << "Enter a name : ";
	}
	else if (which == 2)
	{
		std::cout << "Enter a number : ";
	}
}


auto delete_arr(std::string** third_example)
{
	int which;
	std::cout << "Which name and number do you want to delete ?\n";
	std::cout << "Index of name or number which you remeber : ";
	std::cin >> which;
	delete[] third_example[which];
}


void showarray(std::string** third_example, int allcontacts);
{
	for (int i = 0; i < allcontacts; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			std::cout << third_example[i][j] << " ";
		}
		std::cout << "\n";
	}
}


int main()
{
	//Task 1
	int** example = new int*[10];
	add_width(example, 5);



	//Task 2
	int** second_example = new int* [10];
	delete_width(second_example, 6);



	//Task 3
	int allcontacts;
	std::cout << "How many will people ?\n";
	std::cin >> allcontacts;
	std::string** third_example = new std::string *[allcontacts];
	create_arr(third_example, allcontacts);


	int move;
	while (true)
	{
		std::cout << "What do you want to do?\n";
		std::cout << "1.Input name and number\n2.Search name or number\n3.Delete name with number\n4.Show array\n";
		std::cin >> move;


		if (move == 1)
		{
			input_arr(third_example);
		}
		else if (move == 2)
		{
			search_arr(third_example);
		}
		else if (move == 3)
		{
			delete_arr(third_example);
		}
		else if (move == 4)
		{
			showarray(third_example, allcontacts);
		}
		else
		{
			std::cout << "Not correct\n\n";
		}
	}
}