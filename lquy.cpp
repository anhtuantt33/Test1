#include <iostream>
using namespace std;
int Min(int A[], int n)
{
	if (n == 0)
		return -1;
	if (n == 1)
		return A[0];
	else
	{
		if (A[n - 1] < Min(A, n - 1))
			return A[n - 1];
		else
			return Min(A, n - 1);
	}
}
int Max(int A[], int n)
{
	if (n == 0)
		return -1;
	if (n == 1)
		return A[0];
	else
	{
		if (A[n - 1] > Max(A, n - 1))
			return A[n - 1];
		else
			return Max(A, n - 1);
	}
}
int main() {
	int A[10] = { 4, 6, 3, 19, 22, 34, 67, 54, 15, 24 };
	cout<<"Gia Tri Nho Nhat Cua Mang: "<< Min(A, 10)<<endl;
	cout<<"Gia Tri Lon Nhat Cua Mang: "<< Max(A, 10)<<endl;
}
