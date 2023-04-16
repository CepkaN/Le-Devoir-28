#include"Products.h"
#include<iostream>


void print_prod(product &pr) {
	std::cout << "Продукт :    " << pr.name << '\n';
	std::cout << "Количество : " << pr.number << '\n';
	std::cout << "Стоимость :  " << pr.price << '\n';
}
int full_price(product& pr) {
	int a = pr.number * pr.price;
	return a;
}
void sell(product& pr, int C) {
	pr.number = pr.number - C;
}