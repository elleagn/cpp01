/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 10:42:12 by gozon             #+#    #+#             */
/*   Updated: 2025/01/29 11:36:56 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <string>
# include <iostream>
# include <fstream>

bool    file_to_string(char *filename, std::string& outstring);
void    replace_all(std::string& string, std::string old, std::string new_str);
bool    string_to_file(std::string instring, char *filename);

#endif
