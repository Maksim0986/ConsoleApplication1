#include <iostream>
using namespace std;

int main(void)
{
	while ("") {
		int	c, k, j, n;

		setlocale(LC_ALL, "Russian");
		cout << "Введите значение k: ";

		cin >> k;

		c = n = 0;
		do {
			for (n++, c++, j = n; j /= 10; c++);
		} while (c < k);
		for (c -= k; c--; n /= 10);

		cout << "k-ая цифра последовательности: " << n % 10 << endl;
		break;
	}
	cin.get();
	return 0;
}
