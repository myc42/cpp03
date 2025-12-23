/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 14:58:12 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/23 23:56:14 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"


int main()
{
   
    DiamondTrap dt("Diamond");

    std::cout << "==== Test des noms ====" << std::endl;
    dt.whoAmI();  

    std::cout << "\n==== Test de l'attaque ====" << std::endl;
    dt.attack("un ennemi"); 

    

    return 0;
}
