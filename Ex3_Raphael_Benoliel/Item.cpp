/* Assignment: 1
Author: Raphael Benoliel
*/
#include"Item.h"


float Item::normalizePrice(float calculated) const
{
	if (calculated > MAX_PRICE)return MAX_PRICE;
	if (calculated < MIN_PRICE)return MIN_PRICE;
	return calculated;
}
