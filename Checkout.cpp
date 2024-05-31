#include "Checkout.h"

void CCheckout::scanItem(CItem& f_item)
{
	m_items.push_back(f_item);
}

float CCheckout::calculatePriceWithoutDiscount()
{
	float priceWithoutDiscount = 0;

	for (auto item : m_items)
	{
		priceWithoutDiscount += item.getPrice();
	}

	return priceWithoutDiscount;
}

float CCheckout::calculateDiscount()
{
	float discount = 0;

	for (auto promotion : m_promotions)
	{
		discount += promotion->getDiscount(m_items);
	}

	return discount;
}
