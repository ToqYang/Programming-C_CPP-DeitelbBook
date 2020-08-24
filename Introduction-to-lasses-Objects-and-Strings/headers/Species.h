#include <iostream>
#include <string>


/**
 * Species: (class) Interface
 *
 * Store the behavior of a class
 */
class Species
{
  public:
    explicit Species(std::string, std::string, int, int);

    // Verify set
    void set_name(std::string);
    void set_country(std::string);
    void set_population(int);
    void set_growth_rate(int);

    // Get items
    std::string get_name(void) const;
    std::string get_country(void) const;
    int get_population(void) const;
    int get_growth_rate(void) const;

    // Display items
    void DisplayMessage(void) const;
    int CalculatePopulation(int) const;

  private:
    // Description item
    std::string name;
    std::string country;

    // Values
    int population;
    int growth_rate;
};