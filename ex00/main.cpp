/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 14:58:12 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/20 16:28:02 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ()
{
    ClapTrap Clapclap = ClapTrap ("zen");
    Clapclap.attack("cool") ;
    Clapclap.takeDamage(1);
    Clapclap.beRepaired(1) ;
    Clapclap.takeDamage(9);
    Clapclap.attack("cool") ;
    
}