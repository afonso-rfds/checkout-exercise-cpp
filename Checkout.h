#pragma once

#include <vector>

#include "Item.h"

class CCheckout
{

public:
	CCheckout() = default;
	~CCheckout() = default;

	void scanItem(CItem& f_item);

private:
	std::vector<CItem> m_items;
};

