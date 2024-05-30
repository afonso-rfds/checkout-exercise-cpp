#pragma once

#include "Promotion.h"


class CBuyNGetOnePromo : public CPromotion
{
public:
	CBuyNGetOnePromo() = delete;
	~CBuyNGetOnePromo() = default;

	

	int assignPromotion(std::vector<CItem> &f_items) override;

private:
	const char m_sku;
};

