/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 14:58:06 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/23 23:46:58 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name) , _hitPoint(10) , _energyPoints(10), _attackDamage(0)
{
        std::cout << "ClapTrap " << _name << " constructed" << std::endl;

}


ClapTrap::ClapTrap(ClapTrap const & cpy)
{
    _attackDamage  =  cpy._attackDamage ;
    _energyPoints  =  cpy._energyPoints ;
    _hitPoint  =  cpy._hitPoint ;
     std::cout << " Claptrap copy is called." << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & assign)
{
    if (this != &assign)
    {
       _attackDamage  =  assign._attackDamage ;
       _energyPoints  =  assign._energyPoints ;
       _hitPoint  =  assign._hitPoint ;
       std::cout << " operator copy is called." << std::endl;
    }
    return ( *this) ;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " destructed" << std::endl;
}


void ClapTrap::attack(const std::string& target)
{
    if (_hitPoint > 0 && _energyPoints > 0)
    {
        _energyPoints--;
        std::cout << "ClapTrap " << _name
                  << " attacks " << target
                  << ", causing " << _attackDamage
                  << " points of damage!" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << _name
                  << " can't attack (no hit points or energy points left)"
                  << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoint <= amount)
        _hitPoint = 0;
    else
        _hitPoint -= amount;
    std::cout << "ClapTrap " << _name
              << " takes " << amount
              << " points of damage!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
     if (_hitPoint > 0 && _energyPoints > 0)
    {
        _energyPoints--;
        _hitPoint += amount;

        std::cout << "ClapTrap " << _name
                  << " repairs itself and regains "
                  << amount << " hit points!" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << _name
                  << " can't be repaired (no hit points or energy points left)"
                  << std::endl;
    }
}

