/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 14:58:12 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/20 21:14:08 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main ()
{
  ClapTrap clap("name1");
  clap.attack("name2");
  ScavTrap scav("name3");
  scav.guardGate();
  scav.attack("name4");
    
}