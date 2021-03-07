#include<iostream>
#include<iomanip>
#include<ctime>
#include<string>

using namespace std;

int** createM(int n);
void showM(int** X, int n);

int main()
{
	int n;
	cout << "Enter n: "; cin >> n;
	int** X = createM(n);
	showM(X, n);
}

int** createM(int n)
{
	srand(time(NULL));
	int** X = new int* [n];
	for (int i = 0; i < n; i++)
	{
		X[i] = new int[n];
		for (int j = 0; j < n; j++)
		{
			X[i][j] = rand() % 1801 - 900;
		}
	}
	return X;
}

void showM(int** X, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(5) << X[i][j];
		}
		cout << endl;
	}
	cout << endl;
}