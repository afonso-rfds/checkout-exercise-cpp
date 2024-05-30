#pragma once

#include <vector>
#include "Item.h"

class CPromotion
{
public:
	virtual float getDiscount(std::vector<CItem> &f_items) = 0;
};

