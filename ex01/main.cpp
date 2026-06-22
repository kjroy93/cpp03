/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 15:53:05 by kmarrero          #+#    #+#             */
/*   Updated: 2026/06/22 17:52:45 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	robot("Balaur", 100, 50, 20);
	ScavTrap	robot_01("Liael=Odium", 75, 50, 20);

	std::cout << robot.getName() << " Stats: "
	<< "\n"
	<< "Hit Points: " << robot.getHitPoints()
	<< "\n"
	<< "Energy: " << robot.getEnergy()
	<< "\n"
	<< "Attack power: " << robot.getAttackPower()
	<< std::endl;
	std::cout << robot_01.getName() << " Stats: "
	<< "\n"
	<< "Hit Points: " << robot_01.getHitPoints()
	<< "\n"
	<< "Energy: " << robot_01.getEnergy()
	<< "\n"
	<< "Attack power: " << robot_01.getAttackPower()
	<< std::endl;
	robot.attack(robot_01.getName());
	robot_01.guardGate();
	robot_01.attack(robot.getName());
	robot.takeDamage(robot_01.getAttackPower() * 3);
	robot.beRepaired(2);
	return (0);
}
