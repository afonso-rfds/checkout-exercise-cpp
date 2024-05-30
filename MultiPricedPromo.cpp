#include "MultiPricedPromo.h"



float CMultiPricedPromo::getDiscount(std::vector<CItem>& f_items)
{
	int   numEligibleItems = 0;
	float priceElibleItems = 0;
	int   numPacks;
	float discount;
	float discountPerPack;


	for (CItem item : f_items)
	{
		if (item.getSKU() == m_sku)
		{
			numEligibleItems++;
			priceElibleItems = item.getPrice();
		}
	}

	discountPerPack = (m_requiredAmountForReward * priceElibleItems) - m_promoPrice;
	numPacks = numEligibleItems / m_requiredAmountForReward;
	discount = numPacks * discountPerPack;

	return discount;
}
