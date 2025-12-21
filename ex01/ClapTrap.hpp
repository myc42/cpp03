/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 14:58:09 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/20 20:28:50 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP


#include <iostream>

class ClapTrap
{
    protected :
            std::string _name;
            unsigned int         _hitPoint;
            unsigned int         _energyPoints;
            unsigned int         _attackDamage;
    public :
            ClapTrap(std::string name);
            ClapTrap(ClapTrap const & cpy);
            ClapTrap & operator=(ClapTrap const & assign);
            ~ClapTrap();
            void attack(const std::string& target);
            void takeDamage(unsigned int amount);
            void beRepaired(unsigned int amount);
};

#endif 
