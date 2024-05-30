#include "Checkout.h"

void CCheckout::scanItem(CItem& f_item)
{
	m_items.push_back(f_item);
}