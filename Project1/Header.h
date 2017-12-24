#pragma once
#include <iostream>
#include <string>
#include "MyForm.h"


class	player {
	int n;

public:
	player() {};
	player(int n)
	{
		this->n = n;
	
	}
	int getN()
	{
		return n;
	}
	void setN(int n)
	{
		this->n = n;
	}



};