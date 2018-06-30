#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include "ItemToPurchase.h"
#include <string>
#include <vector>
using namespace std;

class ShoppingCart
{
	public:
		string GetCustomerName();
		string GetDateCreated();
		void AddItemToCart(ItemToPurchase);
		void RemoveItemFromCart(string);
		void UpdateItemQuantity(string, int);
		int GetNumOfItems();
		double GetTotalCost();
		void PrintItemTotalsAndCosts();
		void PrintItemDescriptions();
	private:
		string customerName;
		string dateCreated;
		vector<ItemToPurchase> items;
};
#endif