/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjroydev <kjroydev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 19:27:58 by kjroydev          #+#    #+#             */
/*   Updated: 2026/06/10 19:31:25 by kjroydev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	robot;

	robot = ClapTrap("Balaur");
	robot.attack("Jenkins");
	robot.takeDamage(3);
	robot.beRepaired(2);
	return (0);
}