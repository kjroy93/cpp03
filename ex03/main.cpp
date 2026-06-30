/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 18:07:55 by kmarrero          #+#    #+#             */
/*   Updated: 2026/06/30 19:45:03 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap	robot_00;
	ScavTrap	robot_01;
	FragTrap	robot_02("Bavsargra", 100, 100, 30);
	DiamondTrap	robot_03("Liael", 100, 30, 20);

	robot_00 = ClapTrap("Varga", 100, 100, 40);
	std::cout << robot_00.getName() << " attack power: " << robot_00.getAttackPower() << std::endl;
	std::cout << "ClapTrap name: " << robot_03.getName() << std::endl;
	robot_01 = ScavTrap("Claire");
	robot_03.whoAmI();
	robot_03.attack(robot_01.getName());
	return (0);
}
