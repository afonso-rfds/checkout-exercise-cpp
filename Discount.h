#pragma once

#include <vector>
#include "Item.h"

class CDiscount
{
public:
	virtual float getDiscount(std::vector<CItem> &f_items) = 0;
};

