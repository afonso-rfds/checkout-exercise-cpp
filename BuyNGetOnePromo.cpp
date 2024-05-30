#include "BuyNGetOnePromo.h"

float CBuyNGetOnePromo::getDiscount(std::vector<CItem>& f_items)
{
	int   numEligibleItems = 0;
	int   freeItems		   = 0;
	float priceElibleItems = 0;
	float discount;

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

	discount = static_cast<float>(freeItems) * priceElibleItems;

	return discount;
}
