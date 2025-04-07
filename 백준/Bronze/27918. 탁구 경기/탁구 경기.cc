#include<iostream>

int main() 
{
	int a, b = 0, d = 0;
	char c;
	std::cin >> a;
	for (int i = 0; i < a; i++)
	{
		std::cin >> c;
		if (c == 'D' && 2 > b - d && 2 > d - b)
			b++;
		else if (c == 'P' && 2 > d - b && 2 > b - d)
			d++;
	}
	std::cout << b << ":" << d << std::endl;
}