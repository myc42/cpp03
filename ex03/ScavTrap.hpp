/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 19:17:12 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/23 23:31:20 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"


class ScavTrap : virtual public ClapTrap 
{   
                 
        public :
                ScavTrap (std::string name);
                ~ScavTrap ();
                ScavTrap(ScavTrap const & cpy);
                ScavTrap & operator=(ScavTrap const & assign);
                void attack(const std::string& target);
                void guardGate();
            
} ;

#endif 