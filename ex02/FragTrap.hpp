/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 21:21:52 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/24 15:53:04 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap 
{   
                 
        public :
                FragTrap (std::string name);
                ~FragTrap ();
                FragTrap(FragTrap const & cpy);
                FragTrap & operator=(FragTrap const & assign);
                //void attack(const std::string& target);
                void highFivesGuys(void);
            
} ;


#endif