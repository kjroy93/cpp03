/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 17:21:16 by kmarrero          #+#    #+#             */
/*   Updated: 2026/06/23 17:27:47 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const std::string& name);
		FragTrap(const std::string& name, const int hp, const int ep, const int ad);
		FragTrap(const FragTrap& other);
		FragTrap& operator=(const FragTrap& other);
		~FragTrap();
		void	attack(const std::string& target);
		void	highFiveGuys(void);
};

#endif