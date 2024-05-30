#pragma once

#include <vector>
#include "CItem.h"

class CPromotion
{
public:
	virtual int assignPromotion(std::vector<CItem> f_items) = 0;
};

