
#include <sstream>
#include <iostream>
#include <iomanip>

using namespace std;
const int N = 4;
const int M = 4;

void D1(double A[N][M], int b, int c) {
	double a = 0;
	for (int i = 0; i < b; i++)
	{
		for (int j = 0; j < c; j++)
		{

			A[i][j] = (double)(((double)rand() / RAND_MAX) * 10);
			cout << setw(20) << A[i][j];

		}
		cout << endl;
		a = a + A[i][i];
	}
	cout << "Диагональ " << a;
}
 void F1(int A[N][M], int b, int c)
{
	int t, max; int j = 0;
		for (int i = 2; i < 3; i++)
		{
			max = (A[i][j]);
			for (j = 0; j < c; j++)
			{
				if (A[i][j + 1] > max)
				{
					cout << "\n" << A[i][j] << "\t" << A[i][j + 1];

					t = A[i][j + 1];
					A[i][j + 1] = A[i][j];
					A[i][j] = t;
					cout << "\n" << A[i][j] << "\t" << A[i][j + 1];
				}
			}
		}
	print(A, b, c);
}
void А2(char A[N][M], int b, int c)
{

	for (int i = 0; i < b; i++)
	{
		for (int j = 0; j < c; j++)
		{

			A[i][j] = 'N' + rand();
			cout << setw(20) << A[i][j];

		}
		cout << endl;
	}
};
void FR(int A[N][M], int b, int c) 
{
	cout << endl;
	for (int i = 0; i < b; i++)
	{
		for (int j = 0; j < c; j++)
		{

			cout << setw(5) << A[i][j];

		}
		cout << endl;

	}
};

int main()
{
	int B[N][M]; double A[N][M]; char C[N][M];
	cout << endl;

	D1(B, N, M);
	return 0;
}
int gcd(int a, int b) {
	return !b ? a : gcd(b, a % b);
}
 

