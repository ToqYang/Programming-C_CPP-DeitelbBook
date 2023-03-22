#include <iostream>
#include <string>


/**
 * Inventory: (class) Interface
 *
 * Store the behavior of a class
 */
class Inventory
{
  public:
    explicit Inventory(std::string, int);

    // Verify set
    void set_description(std::string);
    void set_stock(int);

    // Get items
    int get_stock(void) const;
    std::string get_description(void) const;

    // Display items
    void DisplayMessage() const;

    // Functionalities
    void Purchase(int);
    void Sale(int);
  private:
    // Stock of a product
    int balance_stock;

    // Description
    std::string description;
};