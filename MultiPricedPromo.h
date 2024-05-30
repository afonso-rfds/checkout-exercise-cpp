#pragma once

#include "Promotion.h"


class CMultiPricedPromo : public CPromotion
{
public:
	CMultiPricedPromo() = delete;
	~CMultiPricedPromo() = default;

	CMultiPricedPromo(char f_sku, int f_requiredAmountForReward, float f_promoPrice) :
		CPromotion(), 
		m_sku(f_sku), 
		m_requiredAmountForReward(f_requiredAmountForReward),
		m_promoPrice(f_promoPrice)
		{}

	float getDiscount(std::vector<CItem>& f_items) override;

private:
	const char   m_sku;
	const int    m_requiredAmountForReward;
	const float  m_promoPrice;
};

