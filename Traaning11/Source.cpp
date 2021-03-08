#include<iostream>
#include<iomanip>
#include<ctime>
#include<string>

using namespace std;

int** createM(int n);
void showM(int** X, int n);
void sort(int** X, int n);

int main()
{
	int n;
	cout << "Enter n: "; cin >> n;
	int** X = createM(n);
	showM(X, n);
	sort(X, n);
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
			X[i][j] = rand() % 21;
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

void sort(int** X, int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		for (int k = 0; k < n - 1; k++)
		{
			for (int j = n - 2; j >= 0; j--)
			{
				if (X[i][j] > X[i][j + 1])
				{
					int temp = X[i][j];
					X[i][j] = X[i][j + 1];
					X[i][j + 1] = temp;
				}
			}
		}
	}
}