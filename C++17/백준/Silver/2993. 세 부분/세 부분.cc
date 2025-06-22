#include<iostream>
using namespace std;

int main() {
	string str, result = "zzzzzzzzzz";
	cin >> str;
	int len = str.length();

	for (int i = 0; i < len -2; i++)
		for (int j = i + 1; j < len - 1; j++)
		{
			string temp;
			for (int k = i; k >= 0; k--)
				temp += str[k];
			for (int k = j; k > i; k--)
				temp += str[k];
			for (int k = len - 1; k > j; k--)
				temp += str[k];
			if (result > temp)
				result = temp;
		}

	cout << result;
}
