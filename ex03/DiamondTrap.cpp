/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 21:40:35 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/23 23:53:16 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + " _clap_name")  , FragTrap(name), ScavTrap(name) , _name (name) 
{
     _hitPoint = FragTrap::_hitPoint;
     _energyPoints = ScavTrap::_energyPoints;
     _attackDamage = FragTrap::_attackDamage;
     
}


DiamondTrap::~DiamondTrap()
{
     std::cout << "DiamondTrap destructor" << std::endl;
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name: " << _name << std::endl;
    std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;
}


void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}