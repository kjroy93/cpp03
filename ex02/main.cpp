/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 19:09:06 by kmarrero          #+#    #+#             */
/*   Updated: 2026/06/24 16:42:35 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	robot("Balaur", 100, 50, 20);
	ScavTrap	robot_01;
	FragTrap	robot_02("Bavsargra", 100, 50, 30);

	robot_01 = ScavTrap("Liael=Animus", 75, 50, 20);
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
	std::cout << robot_02.getName() << " Stats: "
	<< "\n"
	<< "Hit Points: " << robot_02.getHitPoints()
	<< "\n"
	<< "Energy: " << robot_02.getEnergy()
	<< "\n"
	<< "Attack power: " << robot_02.getAttackPower()
	<< std::endl;
	robot.attack(robot_02.getName());
	robot_02.takeDamage(robot.getAttackPower());
	robot_02.highFiveGuys();
	robot_02.attack(robot.getName());
	robot.takeDamage(robot_02.getAttackPower());
	robot_01.attack(robot_02.getName());
	robot_02.takeDamage(robot_01.getAttackPower() * 3);
	return (0);
}
