/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 16:47:31 by kmarrero          #+#    #+#             */
/*   Updated: 2026/06/24 20:07:37 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
	:ClapTrap()
{
	std::cout << "Default constructor of DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name)
	:ClapTrap(name_ + "_clap_name", 100, 50, 30),
	name_(name)
{
	std::cout << "Constructor to assign name to DiamondTrap called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name, const int hp, const int ep, const int ap)
	:ClapTrap(name_ + "_clap_name", hp, ep, ap),
	name_(name)
{
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
	:ClapTrap(other.name_, 100, 50, 30),
	name_(other.name_)
{
	std::cout << "Copy constructor of DiamondTrap called" << std::endl;
	hit_points_ = FragTrap::hit_points_;
	energy_ = ScavTrap::energy_;
	attack_power_ = FragTrap::attack_power_;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	std::cout << "Operator assing of DiamondTrap called" << std::endl;
	if (this != &other)
	{
		this->name_ = other.name_;
		this->hit_points_ = other.hit_points_;
		this->energy_ = other.energy_;
		this->attack_power_ = other.attack_power_;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor of DiamondTrap called" << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << this->name_ << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::name_ << std::endl;
}
