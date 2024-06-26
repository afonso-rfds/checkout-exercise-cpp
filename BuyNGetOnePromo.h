#pragma once

#include "Discount.h"


class CBuyNGetOnePromo : public CDiscount
{
public:
	CBuyNGetOnePromo() = delete;
	~CBuyNGetOnePromo() = default;

	CBuyNGetOnePromo(char f_sku, int f_requiredAmountForReward) : CDiscount(), m_sku(f_sku), m_requiredAmountForReward(f_requiredAmountForReward) {}

	float getDiscount(std::vector<CItem> &f_items) override;

private:
	const char m_sku;
	const int  m_requiredAmountForReward;
};

