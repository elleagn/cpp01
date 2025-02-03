/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 09:27:32 by gozon             #+#    #+#             */
/*   Updated: 2025/02/03 10:25:31 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

void    myReplace(std::string& string, std::string old_str, std::string new_str)
{

    size_t  pos = string.find(old_str, 0);
    size_t  oldlen = old_str.length();
    size_t  newlen = new_str.length();

    while (pos != std::string::npos)
    {
        string.erase(pos, oldlen);
        string.insert(pos, new_str);
        pos += newlen;
        pos = string.find(old_str, pos);
    }

}

void    replaceStringFile(std::ifstream& ifs, std::ofstream& ofs, 
            std::string old_str, std::string new_str) {
    
    
    std::string line;
    
    while(std::getline(ifs, line)) {
        myReplace(line, old_str, new_str);
        ofs << line;
        if (ofs.bad()) {
            std::perror("ofs: error while writing to file");
            break;
        }
        if (!ifs.eof()) {
            ofs << "\n";
        }
    }
        if (ifs.bad()) {
            std::perror("ifs: error while reading file");
        }
                 
}

int main(int ac, char **av) {
    
    if (ac != 4) {
        std::cout << "Usage ./replace filename s1 s2" << std::endl;
        return (0);
    }

    std::ifstream ifs(av[1]);
    if (!ifs.is_open()) {
        std::perror("ifs: error while opening file");
        return (1);
    }
    
    std::string outfile = (std::string)av[1] + ".replace";
    std::ofstream ofs(outfile.c_str(), std::fstream::out | std::fstream::trunc);
    if (!ofs.is_open()) {
        std::perror("ofs: error while opening file");
        ifs.close();
        return (1);
    }

    replaceStringFile(ifs, ofs, av[2], av[3]);

    ifs.close();
    ofs.close();

    return (0);
    
}