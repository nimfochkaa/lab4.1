#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int N, k;
	double P;

	cout << "k = "; cin >> k;
	cout << "N = "; cin >> N;

	k = N;
	P = 1;
	while (k <= 19)
	{
		P *= ((double(k - N) / (k + N)) + 1);
		k++;
	}
	cout << P << endl;


	P = 1;
	k = N;
	do {
		P *= ((double(k - N) / (k + N)) + 1);
		k++;
	} while (k <= 19);
	cout << P << endl;

	P = 1;
	for (k = N; k <= 19; k++)
	{
		P *= ((double(k - N) / (k + N)) + 1);
	}
	cout << P << endl;

	P = 1;
	for (k = 19; k >= N; k--)
	{
		P *= ((double(k - N) / (k + N)) + 1);
	}
	cout << P << endl;

	return 0;
}