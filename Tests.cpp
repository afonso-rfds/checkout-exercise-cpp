#include "Tests.h"


void Tests::CheckoutTest_scanItem_single()
{
	std::cout << "Testing a single scan of an item" << std::endl << std::endl;

	CItem itemA('A', 10);

	CCheckout checkout;
	checkout.scanItem(itemA);

	std::cout << "SKU:   " << checkout.getItems()[0].getSKU() << std::endl;
	std::cout << "Price: " << checkout.getItems()[0].getPrice() << std::endl;

}

void Tests::CheckoutTest_scanItem_multiple()
{
	std::cout << "Testing multiple scans of items" << std::endl << std::endl;

	CItem itemA('A', 10);
	CItem itemB('B', 20);
	CItem itemC('C', 30);
	CItem itemD('D', 40);
	CItem itemE('A', 50);

	CCheckout checkout;
	checkout.scanItem(itemA);
	checkout.scanItem(itemB);
	checkout.scanItem(itemC);
	checkout.scanItem(itemD);
	checkout.scanItem(itemE);

	for (auto item : checkout.getItems())
	{
		std::cout << "SKU:   " << item.getSKU() << std::endl;
		std::cout << "Price: " << item.getPrice() << std::endl << std::endl;
	}

}

void Tests::BuyNGetOnePromoTest_getDiscountA()
{
	std::cout << "Testing BuyNGetOnePromo discount" << std::endl << std::endl;

	std::vector<CItem> items;
	items.push_back(CItem('A', 5));
	items.push_back(CItem('A', 5));
	items.push_back(CItem('A', 5));
	items.push_back(CItem('A', 5));
	items.push_back(CItem('A', 5));
	items.push_back(CItem('A', 5));
	items.push_back(CItem('A', 5));
	items.push_back(CItem('A', 5));

	CBuyNGetOnePromo promotion('A', 3);

	std::cout << "Discount: " << promotion.getDiscount(items) << std::endl;

}

void Tests::BuyNGetOnePromoTest_getDiscountB()
{
	std::cout << "Testing BuyNGetOnePromo discount" << std::endl << std::endl;

	std::vector<CItem> items;
	items.push_back(CItem('A', 5));
	items.push_back(CItem('A', 5));
	items.push_back(CItem('A', 5));
	items.push_back(CItem('A', 5));
	items.push_back(CItem('A', 5));
	items.push_back(CItem('A', 5));
	items.push_back(CItem('A', 5));
	items.push_back(CItem('A', 5));
	items.push_back(CItem('B', 5));
	items.push_back(CItem('B', 5));
	items.push_back(CItem('B', 5));
	items.push_back(CItem('A', 5));


	CBuyNGetOnePromo promotion('A', 2);

	std::cout << "Discount: " << promotion.getDiscount(items) << std::endl;

}