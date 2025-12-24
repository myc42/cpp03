/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 19:17:10 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/24 15:34:54 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

 ScavTrap::ScavTrap (std::string name) : ClapTrap(name)
 { 
    _hitPoint = 100 ;
    _energyPoints = 50 ;
    _attackDamage = 20 ;
    std::cout << "ScavTrap " << _name << " constructed" << std::endl;
 }

 ScavTrap::ScavTrap(ClapTrap const & cpy) :  ClapTrap(cpy)
 {
         std::cout << " ScavTrap copy is called." << std::endl;
 }
 

 ScavTrap & ScavTrap::operator=(ScavTrap const & assign)
{
    (void)assign;
    return (*this) ;
}
  

 ScavTrap::~ScavTrap ()
 {
        std::cout << "ScavTrap " << _name << " destructed" << std::endl;

 }
   

 void ScavTrap::attack(const std::string& target)
{
    if (_hitPoint > 0 && _energyPoints > 0)
    {
        _energyPoints--;
        std::cout << "ScavTrap " << _name
                  << " attacks " << target
                  << ", causing " << _attackDamage
                  << " points of damage!" << std::endl;
    }
    else
    {
        std::cout << "ScavTrap " << _name
                  << " can't attack (no hit points or energy points left)"
                  << std::endl;
    }
}

 void ScavTrap::guardGate()
 {
    std::cout << _name << " ScavTrap is now in Gate keeper mode " << std::endl;
 }