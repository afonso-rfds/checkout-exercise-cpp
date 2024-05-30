#pragma once

class CItem
{
public:
	CItem() = delete;
	~CItem() = default;

	CItem(char f_sku, int f_price) : m_sku(f_sku), m_price(f_price) {}

	char getSKU();
	int  getPrice();

private:
	const char m_sku;
	const int  m_price;
};

