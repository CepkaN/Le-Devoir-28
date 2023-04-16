#pragma once
#include<iostream>
struct product {
	std::string name = "empty";
	int number = 0;
	int price = 0;
};
void print_prod(product& pr);
int full_price(product& pr);
void sell(product& pr, int C);