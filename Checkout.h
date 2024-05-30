#pragma once

#include <vector>

#include "Item.h"

class CCheckout
{

public:
	CCheckout() = default;
	~CCheckout() = default;

	void scanItem(CItem& f_item);

	std::vector<CItem> getItems() { return m_items; }


private:
	std::vector<CItem> m_items;
};

