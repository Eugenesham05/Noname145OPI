#include <iostream> 
#include <iomanip> 
#include "windows.h"
#include "math.h"

using namespace std;

int main()
{
	int x;
	cout << "Enter x =";
	cin >> x;
	float rez;
	int sum = 0;
	for (int n = 1; n < 4; n++)
	{
		sum = cos(sum) + n;
	}

	rez = log(x) + sum;
	cout << "Y=" << rez << endl;

	system("pause");
	return 0;
}


