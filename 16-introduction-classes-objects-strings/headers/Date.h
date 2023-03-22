#include <iostream>
#include <string>


/**
 * Date: (class) Interface
 *
 * Store the behavior of a class
 */
class Date
{
  public:
    explicit Date(int, int, int);

    // Verify set
    void set_month(int);
    void set_day(int);
    void set_year(int);

    // Get functions
    int get_month(void) const;
    int get_day(void) const;
    int get_year(void) const;

    void DisplayDate(void);

  private:

    // Composed Date
    int month;
    int day;
    int year;
};