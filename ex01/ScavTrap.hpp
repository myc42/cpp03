/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 19:17:12 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/24 15:34:34 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap 
{   
                 
        public :
                ScavTrap (std::string name);
                ~ScavTrap ();
                ScavTrap(ClapTrap const & cpy);
                ScavTrap & operator=(ScavTrap const & assign);
                void attack(const std::string& target) ;
                void guardGate();
            
} ;

#endif 