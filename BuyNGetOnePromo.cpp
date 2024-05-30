#include "BuyNGetOnePromo.h"

int CBuyNGetOnePromo::getDiscount(std::vector<CItem>& f_items)
{
	int numEligibleItems = 0;
	int priceElibleItems = 0;
	int discount		 = 0;

	for (CItem item : f_items)
	{
		if (item.getSKU() == m_sku)
		{
			numEligibleItems++;
			priceElibleItems = item.getPrice();
		}
	}

	int freeItems = 0;
	for (int counter = 0; counter + m_requiredAmountReward < numEligibleItems; )
	{
		counter += m_requiredAmountReward + 1;
		freeItems++;
	}

	discount = freeItems * priceElibleItems;

	return discount;
}
