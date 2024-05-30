#include "BuyNGetOnePromo.h"

int CBuyNGetOnePromo::getDiscount(std::vector<CItem>& f_items)
{
	int numEligibleItems = 0;
	int freeItems		 = 0;
	int priceElibleItems = 0;
	int discount;

	for (CItem item : f_items)
	{
		if (item.getSKU() == m_sku)
		{
			numEligibleItems++;
			priceElibleItems = item.getPrice();
		}
	}

	for (int counter = 0; counter + m_requiredAmountForReward < numEligibleItems; )
	{
		counter += m_requiredAmountForReward + 1;
		freeItems++;
	}

	discount = freeItems * priceElibleItems;

	return discount;
}
