#include "../headers/Invoice.h"


/**
 * Invoice - Constructor of the class
 * @item: (string) Number of the item
 * @des: (string) Description of the string
 * @quantity: (int) Quantity of the purchased
 * @price: (int) Price per item
 *
 */
Invoice::Invoice(std::string item, std::string des, int quantity, int price)
: part_num(item), description(des), purchased(quantity), price_item(price)
{

}


/**
 * set_partnum - Sanitize the value of item
 * @item: (string) Model of the product
 *
 */
void Invoice::set_partnum(std::string item)
{
  part_num = item;
}


/**
 * set_description - Sanitize the value of description
 * @des: (string) Description of a product
 *
 */
void Invoice::set_description(std::string des)
{
  description = des;
}


/**
 * set_purchased - Sanitize the value of des
 * @des: (int) Product purchased description
 *
 */
void Invoice::set_purchased(int quantity)
{
  if (quantity >= 0)
    purchased = quantity;
  else
    std::cerr << "Enter a value > 0" << std::endl;
}


/**
 * set_price_item - Sanitize the value of price
 * @des: (int) Value of the product
 *
 */
void Invoice::set_price_item(int price)
{
    if (price >= 0)
      price_item = price;
    else
      std::cerr << "Enter a value > 0" << std::endl;
}


/**
 * get_partnum - Get the name of the model piece
 *
 * Return: (string) Get the partnum
 */
std::string Invoice::get_partnum(void) const
{
  return part_num;
}


/**
 * get_description - Get the name of the description
 *
 * Return: (string) Description in characters
 */
std::string Invoice::get_description(void) const
{
  return description;
}


/**
 * get_purchased - Get the the value
 *
 */
int Invoice::get_purchased(void) const
{
  return purchased;
}


/**
 * get_purchased - Get the name of th description
 *
 */
int Invoice::get_price_item(void) const
{
  return price_item;
}


/**
 * get_InvoiceAmount - Get of the total price x*y
 * @x: (int) First Num
 * @y: (int) Second Num
 *
 * Return: Quantity x Price
 */
int Invoice::get_InvoiceAmount(int x, int y) const
{
  return (x * y);
}


/**
 * DisplayMessage - Show the invoice
 *
 */
void Invoice::DisplayMessage(void) const
{
  int q = get_purchased();
  int pri = get_price_item();
  std::cout << "\nName of the part: " << get_partnum()
            << "\nDescription" << get_description()
            << "\nQuantity: " << q
            << "\nPrice Item" << pri
            << "\nTotal: " << get_InvoiceAmount(q, pri)
            << std::endl;
}