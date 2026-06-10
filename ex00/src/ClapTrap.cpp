/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjroydev <kjroydev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 15:15:36 by kjroydev          #+#    #+#             */
/*   Updated: 2026/06/10 19:41:02 by kjroydev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	this->hit_points_ = 10;
	this->energy_ = 10;
	this->attack_power_ = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor to assing name called" << std::endl;
	this->name_ = name;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "Operator assign called" << std::endl;
	if (this != &other)
		this->name_ = other.name_;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Desctructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << this->name_ << " attacks " << target << ", causing "
	<< this->attack_power_ << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->name_ << " recieved " << amount
	<< " of damange!" << std::endl;
	this->hit_points_ -= amount;
	std::cout << "Total hit points: " << this->hit_points_ << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->name_ << " expend " << amount << " of energy points "
	<< "in order to restore 3 hit points" << std::endl;
	this->hit_points_ += 3;
	this->energy_ -= amount;
	std::cout << "Total hit points: " << this->hit_points_ << std::endl;
	std::cout << "Energy points: " << this->energy_ << std::endl;
}
