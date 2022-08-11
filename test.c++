#include <iostream>
using namespace std;

void nhap(int* arr, int n)
{
	cout << "nhap vao cac phan tu cua mang: ";
	for (size_t i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}

void hienthi(int* arr, int n)
{
	for (size_t i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}

int vitri(int* arr, int n, int x)
{
	if (x < arr[0])
	{
		return 0;
	}
	if (x > arr[n - 1])
	{
		return n;
	}
	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] >= x)
		{
			return i;
		}
	}
}

void themgiatri(int* arr, int n, int idx, int x)
{
	if (idx >= 0 && idx <= n)
	{
		for (size_t i = n; i >= idx; i--) {
			arr[i] = arr[i - 1];
			arr[idx] = x;
			n++;
		}

	}
}

void sapXep(int* arr, int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				swap(arr[i], arr[j]);
			}
		}
	}
}



int main()
{
	int n, idx, x;
	cin >> n;
	int arr[100];
	nhap(arr, n);
	sapXep(arr, n);
	cout << "nhap vao gia tri muon them vao mang: ";
	cin >> x;
	idx = vitri(arr, n, x);
	themgiatri(arr, n, idx, x);
	hienthi(arr, n);

	return 0;
}
