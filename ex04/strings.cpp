/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 11:08:18 by gozon             #+#    #+#             */
/*   Updated: 2025/01/29 11:40:17 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void    replace_all(std::string& string, std::string old, std::string new_str)
{

    size_t  pos = string.find(old, 0);
    size_t  oldlen = old.length();
    size_t  newlen = new_str.length();

    while (pos != std::string::npos)
    {
        string.erase(pos, oldlen);
        string.insert(pos, new_str);
        pos += newlen;
        pos = string.find(old, pos);
    }

}
