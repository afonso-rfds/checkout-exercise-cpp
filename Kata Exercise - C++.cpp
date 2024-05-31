#include <iostream>
#include <vector>

#include "Tests.h"

#include "Item.h"
#include "Checkout.h"
#include "Discount.h"
#include "BuyNGetOnePromo.h"
#include "MultiPricedPromo.h"
#include "MealDealPromo.h"

int main()
{
	std::vector<CDiscount*> promos;
	CCheckout checkout(promos);

	std::cout << "------------------------------------------------------------" << std::endl;
	std::cout << "------------------------------------------------------------" << std::endl;
	std::cout << "Welcome to Checkout Kata" << std::endl << std::endl;
	std::cout << "Prices are: " << std::endl;
	std::cout << "Item        Unit Price (in pounds)         Special Price"          << std::endl;
	std::cout << "A           0.5                            "                       << std::endl;
	std::cout << "B           0.75                           2 for 1.25\x9C "        << std::endl;
	std::cout << "C           0.25                           Buy 3, get one free "   << std::endl;
	std::cout << "D           1.50                           Buy D and E for 3\x9C " << std::endl;
	std::cout << "E           2                              Buy D and E for 3\x9C " << std::endl;
	std::cout << "------------------------------------------------------------" << std::endl;
	std::cout << "------------------------------------------------------------" << std::endl << std::endl << std::endl;


	// ----- Change items properties here -----
	CItem itemA('A', 0.5f);
	CItem itemB('B', 0.75f);
	CItem itemC('C', 0.25f);
	CItem itemD('D', 1.5f);
	CItem itemE('E', 2);


	// ----- Change promotions here -----
	promos.push_back(new CMultiPricedPromo('B', 2, 1.25f));
	promos.push_back(new CBuyNGetOnePromo('C', 3));
	promos.push_back(new CMealDealPromo({ 'D', 'E' }, 3));


	// ----- Change scanned items here -----
	checkout.scanItem(itemB);
	checkout.scanItem(itemB);
	checkout.scanItem(itemD);
	checkout.scanItem(itemB);
	checkout.scanItem(itemE);
	checkout.scanItem(itemB);





	std::cout << "------------- Bill -------------" << std::endl;
	std::cout << "Price:     "   << checkout.calculatePriceWithoutDiscount()                                << "\x9C" << std::endl;
	std::cout << "Discount:  "   << checkout.calculateDiscount()                                            << "\x9C" << std::endl;
	std::cout << "To Pay:    "   << checkout.calculatePriceWithoutDiscount() - checkout.calculateDiscount() << "\x9C" << std::endl;
}

