#include <iostream>
#include <string>


/**
 * HeartRates: (class) Interface
 *
 * Store the behavior of a class
 */
class HeartRates
{
  public:
    explicit HeartRates(std::string, std::string, int, int, int);

    // Verify set
    void set_month(int);
    void set_day(int);
    void set_year(int);
    void set_age(int);
    void set_name(std::string);
    void set_birth(std::string);


    // Get functions
    int get_month(void) const;
    int get_day(void) const;
    int get_year(void) const;
    int get_age(void) const;

    // Equations Hearts
    void get_Maxiumum_Heart_Rate(void) const;
    void get_Target_Heart_Rate(void) const;

    void DisplayHeartRates(void);

  private:

    // Composed HeartRates
    std::string name;
    std::string birthday;
    int age;

    // Composed Date
    int month;
    int day;
    int year;
};