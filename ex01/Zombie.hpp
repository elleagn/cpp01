/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:08:58 by gozon             #+#    #+#             */
/*   Updated: 2025/01/26 10:53:57 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie {

private:

    std::string name;

public:

    Zombie(std::string name);
    Zombie();
    ~Zombie(void);
    void    setName(std::string name);
    void    announce(void) const;

};

Zombie  *zombieHorde(int N, std::string name);
