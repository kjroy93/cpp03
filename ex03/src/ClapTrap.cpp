/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 15:15:36 by kjroydev          #+#    #+#             */
/*   Updated: 2026/06/30 19:21:11 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor of ClapTrap called" << std::endl;
	this->hit_points_ = 10;
	this->energy_ = 10;
	this->attack_power_ = 0;
}

ClapTrap::ClapTrap(const std::string& name)
	:name_(name),
	hit_points_(10),
	energy_(10),
	attack_power_(0)
{
	std::cout << "Constructor to assing name of ClapTrap called" << std::endl;
	this->name_ = name;
}

ClapTrap::ClapTrap(const std::string& name, int hp, int ep, int ap)
	:name_(name), hit_points_(hp), energy_(ep), attack_power_(ap)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	this->name_ = name;
	this->hit_points_ = hp;
	this->energy_ = ep;
	this->attack_power_ = ap;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "Copy constructor of ClapTrap called" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "Operator assign called" << std::endl;
	if (this != &other)
	{
		this->name_ = other.name_;
		this->hit_points_ = other.hit_points_;
		this->attack_power_ = other.attack_power_;
		this->energy_ = other.energy_;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Desctructor of ClapTrap called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << this->name_ << " attacks " << target << ", causing "
	<< this->attack_power_ << " points of damage!" << std::endl;
	this->energy_ -= 1;
	std::cout << "Energy points: " << this->energy_ << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->name_ << " recieved " << amount
	<< " of damage!" << std::endl;
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
	std::cout << "Remaining Energy Points: " << this->energy_ << std::endl;
}

std::string	ClapTrap::getName()
{
	return (this->name_);
}

unsigned int	ClapTrap::getHitPoints()
{
	return (this->hit_points_);
}

unsigned int	ClapTrap::getEnergy()
{
	return (this->energy_);
}

unsigned int	ClapTrap::getAttackPower()
{
	return (this->attack_power_);
}
