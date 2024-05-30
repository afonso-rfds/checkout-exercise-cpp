#pragma once


#include <iostream>

class Tests
{
public:

	Tests()  = default;
	~Tests() = default;

	void CheckoutTest_scanItem_single();
	void CheckoutTest_scanItem_multiple();

	void BuyNGetOnePromoTest_getDiscountA();
	void BuyNGetOnePromoTest_getDiscountB();

	void CMultiPricedPromoTest_getDiscountA();
	void CMultiPricedPromoTest_getDiscountB();

	void CMealDealPromoTest_getDiscountA();
	void CMealDealPromoTest_getDiscountB();
};

