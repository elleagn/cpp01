/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 11:20:39 by gozon             #+#    #+#             */
/*   Updated: 2025/01/27 14:00:36 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type) {
}

Weapon::~Weapon(void) {
}

std::string&    Weapon::getType(void) {
    
    return (this->type);
    
}

void    Weapon::setType(std::string type) {
    
    this->type = type;

}