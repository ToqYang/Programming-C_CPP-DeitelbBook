#include "../headers/Species.h"


/**
 * Species - Constructor
 * @nam: (string) Description of the name of a species
 * @state: (string) State where is located
 * @population: (string) State where is located
 * @grow: (string) State where is located
 *
 */
Species::Species(std::string nam, std::string state, int pop, int grow)
: name(nam), country(state), population(pop), growth_rate(grow)
{

}


/**
 * set_name - Sanitize the value of nam
 * @nam: (string) Description of the name of a species
 *
 */
void Species::set_name(std::string nam)
{
  name = nam;
}


/**
 * set_country - Sanitize the value of state
 * @state: (string) State where is located
 *
 */
void Species::set_country(std::string state)
{
  country = state;
}


/**
 * set_population - Sanitize the value of population
 * @population: (string) State where is located
 *
 */
void Species::set_population(int pop)
{
  if (population > 0)
    population = pop;
  else
    std::cerr << "Your species is extinct" << std::endl;
}


/**
 * set_country - Sanitize the value of pop
 * @grow: (string) State where is located
 *
 */
void Species::set_growth_rate(int grow)
{
  if (grow > 0)
    growth_rate = grow;
  else
    std::cerr << "You grow rate must be > 0" << std::endl;
}


/**
 * get_name - Show the name of the name of the species
 *
 * Return: (string) Name of the species
 */
std::string Species::get_name(void) const
{
  return name;
}


/**
 * get_country - Show the name of the country of the species
 *
 * Return: (string) Name of the country
 */
std::string Species::get_country(void) const
{
  return country;
}


/**
 * get_population - Show the name of the population of the species
 *
 * Return: (string) Name of the country
 */
int Species::get_population(void) const
{
  return population;
}


/**
 * get_growth_rate - Show the name of the growth rate of the species
 *
 * Return: (string) Name of the country
 */
int Species::get_growth_rate(void) const
{
  return growth_rate;
}


/**
 * DisplayMessage - Show the name the message
 *
 * Return: (string) Name of the country
 */
void Species::DisplayMessage(void) const
{
  std::cout << "Name: " << get_name() << "\nCountry: " << get_country()
            << "Population: " << get_population() << "\nGrowth Rate: "
            << get_growth_rate() << std::endl;
}


/**
 * CalculatePopulation - Show the calculate of the population
 *
 * Return: (string) Name of the country
 */
int Species::CalculatePopulation(int year) const
{
  int populate = get_population();
  int grow = get_growth_rate();
  int endyear = (populate / 100) * grow;

  std::cout << "The start (" << year << ") population is: " << population
            << "\nThe end year (" << year << ") population is: "
            << (populate + endyear) << std::endl;
}
