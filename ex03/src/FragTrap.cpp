/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 17:28:58 by kmarrero          #+#    #+#             */
/*   Updated: 2026/06/24 16:41:50 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
	:ClapTrap("empty", 100, 100, 30)
{
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& name)
	:ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap name constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& name, const int hp, const int ep, const int ad)
	:ClapTrap(name, hp, ep, ad)
{
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
	:ClapTrap(other.name_, 100, 100, 30)
{
	std::cout << "Copy constructor of FragTrap called" << std::endl;
	*this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	std::cout << "Operator assing of FragTrap called" << std::endl;
	if (this != &other)
	{
		this->name_ = other.name_;
		this->hit_points_ = other.hit_points_;
		this->energy_ = other.energy_;
		this->attack_power_  = other.attack_power_;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor of FragTrap called" << std::endl;
}

void	FragTrap::attack(const std::string &target)
{
	std::cout << this->name_ << " cast Chill Touch to " << target << ", causing "
	<< this->attack_power_ << " points of damage!" << std::endl;
	this->energy_ -= 4; 
}

void	FragTrap::highFiveGuys(void)
{
	if (this->energy_ <= 3)
	{
		std::cout <<  this->name_ << " has to low energy to use it's skill." << std::endl;
		return ;
	}
	if (this->hit_points_ == 0)
	{
		std::cout << this->name_ << " is dead." << std::endl;
		return ;
	}
	std::cout << this->name_ << " used it's skill!"
	<< " It makes a high five to gain x2 damage for two turns!" << std::endl;
	this->attack_power_ *= 2;
}
