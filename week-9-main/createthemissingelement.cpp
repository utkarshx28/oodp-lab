#include <iostream>
using namespace std;

int search(int ar[], int size)
{
// Extreme cases
if (ar[0] != 1)
return 1;
if (ar[size - 1] != (size + 1))
return size + 1;

int a = 0, b = size - 1;
int mid;
while ((b - a) > 1) {
mid = (a + b) / 2;
if ((ar[a] - a) != (ar[mid] - mid))
b = mid;
else if ((ar[b] - b) != (ar[mid] - mid))
a = mid;
}
return (ar[a] + 1);
}

int main()
{
int ar[] = { 1, 2, 3, 4, 5, 6, 8 };
int size = sizeof(ar) / sizeof(ar[0]);
cout << "Missing number:" << search(ar, size);
}