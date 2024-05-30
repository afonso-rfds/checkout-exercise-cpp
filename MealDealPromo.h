#pragma once

#include "Promotion.h"


class CMealDealPromo : public CPromotion
{
public:
	CMealDealPromo() = delete;
	~CMealDealPromo() = default;

	CMealDealPromo(std::vector<char> f_skuCombination, float f_promoPrice) :
		CPromotion(),
		m_skuCombination(f_skuCombination),
		m_promoPrice(f_promoPrice)
	{}

	float getDiscount(std::vector<CItem>& f_items) override;

private:
	const std::vector<char> m_skuCombination;
	const float				m_promoPrice;
};



