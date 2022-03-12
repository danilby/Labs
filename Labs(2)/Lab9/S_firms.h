#pragma once
using namespace std;
#ifndef _S_FIRMS_H_
#define _S_FIRMS_H_
#endif // !_S_FIRMS_H_
struct Firms
{
	Firms* next;
	Firms* prev;
	char name[11];
	char number_of_products;
	long long volume;
	float part;
};