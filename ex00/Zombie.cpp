/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:13:57 by gozon             #+#    #+#             */
/*   Updated: 2025/01/25 18:23:49 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name) {

    std::cout << "Zombie " << name << " created." << std::endl;

}

Zombie::~Zombie(void) {

    std::cout << "Zombie " << this->name << " destroyed." << std::endl;

}

void    Zombie::announce(void) {

    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;

}
