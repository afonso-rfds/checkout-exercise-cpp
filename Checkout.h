#pragma once

#include <vector>

#include "Item.h"
#include "Discount.h"

class CCheckout
{

public:
	CCheckout() = delete;
	~CCheckout() = default;

	CCheckout(std::vector<CDiscount*>& f_promotions): m_promotions(f_promotions) {}


	void scanItem(CItem& f_item);
	float calculatePriceWithoutDiscount();
	float calculateDiscount();

private:

	std::vector<CItem> m_items;
	const std::vector<CDiscount*>& m_promotions;
};

