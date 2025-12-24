/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 21:21:49 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/24 15:53:14 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"



FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    _hitPoint = 100 ;
    _energyPoints = 100 ;
    _attackDamage = 30 ;
    std::cout << "FragTrap " << _name << " constructed" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " destructed" << std::endl;
}

FragTrap::FragTrap(FragTrap const & cpy) : ClapTrap(cpy)
{
     std::cout << " FragTrap copy is called." << std::endl;
}

 FragTrap & FragTrap::operator=(FragTrap const & assign)
{
    (void)assign;
    return (*this) ;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Fragtrap " << _name << " high five! ✋!" << std::endl;
}
/* 
void FragTrap::attack(const std::string& target)
{
    if (_hitPoint > 0 && _energyPoints > 0)
    {
        _energyPoints--;
        std::cout << "Fragtrap " << _name
                  << " attacks " << target
                  << ", causing " << _attackDamage
                  << " points of damage!" << std::endl;
    }
    else
    {
        std::cout << "Fragtrap " << _name
                  << " can't attack (no hit points or energy points left)"
                  << std::endl;
    }
}*/