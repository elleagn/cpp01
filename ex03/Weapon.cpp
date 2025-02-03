/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 11:20:39 by gozon             #+#    #+#             */
/*   Updated: 2025/02/03 13:09:46 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type) {
}

Weapon::~Weapon(void) {
}

const std::string&    Weapon::getType(void) {
    
    return (this->type);
    
}

void    Weapon::setType(std::string type) {
    
    this->type = type;

}