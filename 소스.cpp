#include <iostream>
using namespace std;

//9를 10으로 수정했음 : 2019102197오세헌

int main()
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
			cout << i << " * " << j << " = " << i * j << endl;
		cout << endl;
	}

	return 0;
}