#include<iostream>
#include"Products.h"

int main() {
	setlocale(LC_ALL, "Russian");
	std::cout << "Задачка.\n\n";
	product amd{ "Процессор AMD Ryzen 9 7950X",6 ,55999 };
	print_prod(amd); int cif;
	std::cout<<"Общая стоимость оставшегося товара : "<<full_price(amd)<<'\n';
	std::cout << "Введите количество купленного товара : ";
	std::cin >> cif;
	if (cif <= amd.number && cif >= 0) {
		sell(amd, cif);
		std::cout << "Информация по товару обновлена.\n";
		print_prod(amd);
	}
	else
	std::cout << "Некорректное количество товара.\n";

	return 0;
}