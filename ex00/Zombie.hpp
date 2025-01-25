/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:08:58 by gozon             #+#    #+#             */
/*   Updated: 2025/01/25 18:45:14 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie {

private:

    std::string name;

public:

    Zombie(std::string name);
    ~Zombie(void);
    void    announce(void);

};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

