#include <iostream>
#include <string>


/**
 * Invoice: (class) Interface
 *
 * Store the behavior of a class
 */
class Invoice
{
  public:
    explicit Invoice(std::string, std::string, int, int);

    // Verify set
    void set_partnum(std::string);
    void set_description(std::string);
    void set_purchased(int);
    void set_price_item(int);

    // Get items
    std::string get_partnum(void) const;
    std::string get_description(void) const;
    int get_purchased(void) const;
    int get_price_item(void) const;

    // Display items
    void DisplayMessage(void) const;
    int get_InvoiceAmount(int x, int y) const;

  private:
    // Description item
    std::string part_num;
    std::string description;

    // Values
    int purchased;
    int price_item;
};