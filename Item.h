#pragma once

class CItem
{
public:
	CItem()  = delete;
	~CItem() = default;

	CItem(char f_sku, float f_price) : m_sku(f_sku), m_price(f_price) {}

	char   getSKU();
	float  getPrice();

private:
	const char   m_sku;
	const float  m_price;
};

