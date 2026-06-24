/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 14:40:35 by kjroydev          #+#    #+#             */
/*   Updated: 2026/06/24 16:38:57 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class	ClapTrap
{
	protected:
		std::string		name_;
		unsigned int	hit_points_;
		unsigned int	energy_;
		unsigned int	attack_power_;
	public:
		ClapTrap();
		ClapTrap(const std::string& name);
		ClapTrap(const std::string& name, int hp, int ep, int ap);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		virtual			~ClapTrap();
		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		std::string		getName(void);
		unsigned int	getHitPoints(void);
		unsigned int	getEnergy(void);
		unsigned int	getAttackPower(void);
};

#endif