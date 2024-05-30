#include "MealDealPromo.h"
#include "unordered_map"
#include <limits>


float CMealDealPromo::getDiscount(std::vector<CItem>& f_items)
{
	int							  leastOcurrences	   = std::numeric_limits<int>::max();
	float						  priceWithoutDiscount = 0;
	std::unordered_map<char, int> itemsMap;

	for (auto sku : m_skuCombination)
	{
		for (int loopIterator = 0; loopIterator < f_items.size(); loopIterator++)
		{
			if (sku == f_items[loopIterator].getSKU())
			{
				priceWithoutDiscount += f_items[loopIterator].getPrice();
				break;
			}
		}
	}

	// Count number of ocurrences for each item in the checkout list
	for (auto item : f_items)
	{
		itemsMap[item.getSKU()]++;
	}


	// For the items that are part of the combination (promotion), record the ocurrences of the SKU with the least ocurrences (thus the amount of discounts)
	for (auto sku : m_skuCombination)
	{
		if (itemsMap[sku] < leastOcurrences)
		{
			leastOcurrences = itemsMap[sku];
		}
	}

	float discount = (priceWithoutDiscount - m_promoPrice) * leastOcurrences;


	return discount;
}
