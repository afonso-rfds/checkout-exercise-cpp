#pragma once

#include <vector>
#include "Item.h"

class CPromotion
{
public:
	virtual int assignPromotion(std::vector<CItem> f_items) = 0;
};

