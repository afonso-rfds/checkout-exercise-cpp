#pragma once

#include <vector>
#include "Item.h"

class CPromotion
{
public:
	virtual int getDiscount(std::vector<CItem> &f_items) = 0;
};

