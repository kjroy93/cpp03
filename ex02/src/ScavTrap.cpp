/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 15:48:35 by kmarrero          #+#    #+#             */
/*   Updated: 2026/06/24 16:04:24 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
	:ClapTrap("empty", 100, 50, 20)
{
	std::cout << "Default constructor of ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name)
	:ClapTrap(name, 100, 50, 20)
{
	std::cout << "Constructor to assign name in ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name, int hp, int ep, int ap)
	:ClapTrap(name, hp, ep, ap)
{
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
	:ClapTrap(other.name_, 100, 50, 20)
{
	std::cout << "Copy constructor of ScavTrap called" << std::endl;
	*this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "Operator assing of ScavTrap called" << std::endl;
	if (this != &other)
	{
		this->name_ = other.name_;
		this->hit_points_ = other.hit_points_;
		this->energy_ = other.energy_;
		this->attack_power_  = other.attack_power_;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor of ScavStrap called" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	std::cout << this->name_ << " cast Fireball to " << target << ", causing "
	<< this->attack_power_ * 3 << " points of damage!" << std::endl;
	this->energy_-= 10;
}

void	ScavTrap::guardGate()
{
	if (this->hit_points_ == 0 || this->energy_ <= 2)
		std::cout << this->name_ << " cannot activate defensive protocol" << std::endl;
	std::cout << this->name_ << " Activates defensive protocol" << std::endl;
	takeDamage(0);
}
