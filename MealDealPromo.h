#pragma once

#include "Discount.h"


class CMealDealPromo : public CDiscount
{
public:
	CMealDealPromo() = delete;
	~CMealDealPromo() = default;

	CMealDealPromo(std::vector<char> f_skuCombination, float f_promoPrice) :
		CDiscount(),
		m_skuCombination(f_skuCombination),
		m_promoPrice(f_promoPrice)
	{}

	float getDiscount(std::vector<CItem>& f_items) override;

private:
	const std::vector<char> m_skuCombination;
	const float				m_promoPrice;
};



