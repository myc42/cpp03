/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 21:21:49 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/21 16:52:18 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"



FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    ClapTrap::_hitPoint = 100 ;
    ClapTrap::_energyPoints = 100 ;
    ClapTrap::_attackDamage = 30 ;
    std::cout << "FragTrap " << _name << " constructed" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " destructed" << std::endl;
}

FragTrap::FragTrap(ClapTrap const & cpy) : ClapTrap(cpy)
{
     std::cout << " FragTrap copy is called." << std::endl;
}

 FragTrap & FragTrap::operator=(FragTrap const & assign)
{
    (void)assign;
    return (*this) ;
}

