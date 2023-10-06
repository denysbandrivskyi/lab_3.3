// Lab_03_3.cpp
// < Бандрівський Денис Юрійович >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 1

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (x < -6 - R)
		y = 0;
	else
		if (-6 - R <= x && x <= -6)
			y = -sqrt(pow(x, 2) - pow(x - R, 2));
		else
			if (-6 < x && x <= -R)
				y = -R + (R / (-R + 6)) * (x + 6);
			else
				if (-R < x && x <= 0)
					y = sqrt(pow(R, 2) - pow(x, 2));
				else
					if (x > 0 && x <= 3)
					{
						y = R + (-R / 3) * x;
					}
					else
					{
						y = (R / (6) * (x - 3));
					}

	cout << endl;
	cout << "y = " << y << endl;

	cin.get();
	return 0;
}