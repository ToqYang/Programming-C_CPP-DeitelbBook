#include "../headers/BMI.h"


/**
 * Date - Constructor about Date Class
 * @month: (string) month where is located
 * @day: (string) month where is located
 * @year: (string) year where is located
 *
 */
HealthProfile::HealthProfile(std::string nam, std::string birth,\
int d, int m, int y)
: name(nam), birthday(birth), day(d), month(m), year(y)
{

}


/**
 * set_month - Sanitize the value of name
 * @nam: (string) name of the value
 *
 */
void HealthProfile::set_name(std::string nam)
{
  name = nam;
}


/**
 * set_birth - Sanitize the value of birth
 * @birth: (string) Birthday of the person
 *
 */
void HealthProfile::set_birth(std::string birth)
{
  birthday = birth;
}


/**
 * set_month - Sanitize the value of month
 * @month: (string) month where is located
 *
 */
void HealthProfile::set_month(int m)
{
  if (m >= 0 && m <= 12)
    month = m;
  else {
    month = 1;
    std::cerr << "Enter the number of the 1-12" << std::endl;
  }
}


/**
 * set_day - Sanitize the value of day
 * @day: (string) month where is located
 *
 */
void HealthProfile::set_day(int d)
{
  if (d > 0 && d <= 31)
    day = d;
  else {
    day = 1;
    std::cerr << "Enter the number of the 0-31" << std::endl;
  }
}


/**
 * set_year - Sanitize the value of year
 * @year: (string) year where is located
 *
 */
void HealthProfile::set_year(int y)
{
  if (y >= 1900 && y <= 2002)
    year = y;
  else {
    year = 2020;
    std::cerr << "Enter the number of the 1900-2002" << std::endl;
  }
}


/**
 * set_year - Sanitize the value of year
 * @year: (string) year where is located
 *
 */
void HealthProfile::set_BMI(double h, int w)
{
  if (h > 100 || w > 30) {
    bmi = (w / (h * h));
  }
}




/**
 * get_month - Show the month
 *
 * Return: (int) month of the year
 */
int HealthProfile::get_month(void) const
{
  return month;
}


/**
 * get_day - Show the day
 *
 * Return: (int) day of the year
 */
int HealthProfile::get_day(void) const
{
  return day;
}


/**
 * get_year - Show year
 *
 * Return: (int) Year
 */
int HealthProfile::get_year(void) const
{
  return year;
}


/**
 * get_name - Show name
 *
 * Return: (int) Year
 */
std::string HealthProfile::get_name(void) const
{
  return name;
}


/**
 * get_name - Show name
 *
 * Return: (int) Year
 */
std::string HealthProfile::get_birth(void) const
{
  return birthday;
}


/**
 * get_Maxiumum_Heart_Rate - Show the the maximum rate
 *
 */
void HealthProfile::get_Maxiumum_Heart_Rate(void) const
{
  int y_curr = get_year();

  if (year < 2020)
  {
    y_curr = 2020 - y_curr;
    if (get_year() > 2020) {
      --y_curr;
    }
    if (get_month() == 2020) {
      if (14 > get_day())
        --y_curr;
    }
  }

  int frec_Max = 220 - y_curr;

  std::cout << "\nThe 100% is: " << frec_Max << std::endl;
}


/**
 * get_Maxiumum_Heart_Rate - Show the the maximum rate
 *
 */
void HealthProfile::get_Target_Heart_Rate(void) const
{
  int y_curr = get_year();

  if (year < 2020)
  {
    y_curr = 2020 - y_curr;
    if (get_year() > 2020) {
      --y_curr;
    }
    if (get_month() == 2020) {
      if (14 > get_day())
        --y_curr;
    }
  }

  // Get the current Freq
  int frec_Max = 220 - y_curr;
  int percentage = ((frec_Max * 50) / 100);

  std::cout << "\nThe 50% is: " << percentage << std::endl;

  percentage = ((frec_Max * 85) / 100);
  std::cout << "The 85% is: " << percentage << std::endl;
}


/**
 * get_BMI - Show the the maximum rate
 *
 */
int HealthProfile::get_BMI() const
{
  return bmi;
}


/**
 * DisplayDate - Show date format
 *
 */
void HealthProfile::DisplayHealthProfile(void)
{
  std::cout << "Name: " << get_name()
            << "\nBirthday: " << get_birth()
            << get_day() << "/" << get_month() << "/"
            << get_year() << "\nBMI: " << get_BMI() << std::endl;



  get_Maxiumum_Heart_Rate();
  get_Target_Heart_Rate();
}
