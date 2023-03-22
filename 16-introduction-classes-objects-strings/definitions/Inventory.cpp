// Inventory definition
#include "../headers/Inventory.h"


Inventory::Inventory(std::string product_des, int balance)
    : description(product_des)
{
  set_stock(balance);
}


/**
 * set_description - Sanitize the value of description
 * @product_des: (string) Description of a product
 *
 */
void Inventory::set_stock(int balance)
{
  if (balance >= 20)
    balance_stock = balance;
  else {
    std::cerr << "There less than 20 items" << std::endl;
  }
}


/**
 * set_description - Sanitize the value of description
 * @product_des: (string) Description of a product
 *
 */
void Inventory::set_description(std::string product_des)
{
  description = product_des;
}


/**
 * get_stock - Show the const of the value stock
 *
 */
int Inventory::get_stock(void) const
{
  return balance_stock;
}


/**
 * get_description - Show the const of the value description
 *
 */
std::string Inventory::get_description(void) const
{
  return description;
}


/**
 * Purchase - Add products
 * @news: (int) Number of product to add
 *
 */
void Inventory::Purchase(int news)
{
  int total = balance_stock + news;
  if (total >= 20)
    balance_stock = total;
  else {
    std::cerr << "There less than 20 items" << std::endl;
  }
}


/**
 * Purchase - Add products
 * @dele: (int) Number of product to reduce
 *
 */
void Inventory::Sale(int dele)
{
  int total = balance_stock - dele;
  if (total >= 20)
    balance_stock = total;
  else {
    std::cerr << "There less than 20 items" << std::endl;
  }
}


/**
 * DisplayMessage - Show the message with description and stock
 *
 */
void Inventory::DisplayMessage() const
{
  std::cout << "\nDescription of a product" << get_description() << "Stock: "
            << get_stock() << std::endl;
}

