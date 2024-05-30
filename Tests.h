#pragma once

#include "Item.h"
#include "Checkout.h"

#include <iostream>

class Tests
{
public:

	Tests()  = default;
	~Tests() = default;

	void CheckoutTest_scanItem_single();
	void CheckoutTest_scanItem_multiple();
};

