#include <iostream>
#include <map>
#include <string>

int print_usage(void) { std::cout << "Usage: t8 [OPTIONS] <CHARACTER>" << std::endl; return 1; }

void print_map(const std::map<std::string, std::string>& map) {
    char old = 0;

    print_usage();

    for (std::map<std::string, std::string>::const_iterator it = map.begin(); it != map.end(); ++it) {
        char current = it->first.front();
        if (old != 0 && current != old)
            std::cout << std::endl;
        std::cout << it->first << " ";
        old = current;
    }
}

int main(int ac, char** av) {

    std::string name = (ac > 1) ? av[1] : "";

    std::map<std::string, std::string> chars = {
        { "ALISA",      "SSR"},
        { "ASUKA",      "SSR"},
        { "AZUCENA",    "SSL"},
        { "BRYAN",      "SSR"},
        { "CLAUDIO",    "SSL"},
        { "DEVILJIN",   "SSL"},
        { "DRAGUNOV",   "SSR"},
        { "FENG",       "SSL"},
        { "HWOARANG",   "SSC"},
        { "JACK8",      "SSL"},
        { "JIN",        "SSR"},
        { "JUN",        "SSR"},
        { "KAZUYA",     "SSL"},
        { "KING",       "SSR"},
        { "KUMA",       "SSR"},
        { "LARS",       "SSR"},
        { "LAW",        "SSR"},
        { "LEE",        "SSL"},
        { "LEO",        "SSR"},
        { "LEROY",      "SSL"},
        { "LILI",       "SSL"},
        { "NINA",       "SSR"},
        { "PANDA",      "SSR"},
        { "PAUL",       "SSR"},
        { "RAVEN",      "SSL"},
        { "REINA",      "SSL"},
        { "SHAHEEN",    "SSR"},
        { "STEVE",      "SSL"},
        { "VICTOR",     "SSR"},
        { "XIAOYU",     "SSL"},
        { "YOSHI",      "SSL"},
        { "ZAFINA",     "SSL"},
        { "EDDY",       "SSR"},
        { "LIDIA",      "SSR"},
        { "HEIHACHI",   "SSL"},
        { "CLIVE",      "SSR"},
        { "ANNA",       "SSR"},
        { "FAHK",       "SSR"},
        { "ARMORKING",  "SSR"},
        { "MIARYZO",    "SSL"}
    };

    std::map<std::string, std::string>::const_iterator it = chars.find(name);

    if (it != chars.end()) {
        std::cout << it->first << " " << it->second << std::endl;
    } else {
        print_map(chars);
        std::cout << std::endl;
        return 1;
    }
}

/*
ALISA SSR
ASUKA SSR
AZUCENA SSL
BRYAN SSR
CLAUDIO SSL
DEVIL JIN SSL 1 2
DRAGUNOV SSR 1 2
FENG SSL
HWOARANG SSC 1 2
JACK8 SSL 1 2
JIN SSR 1 2
JUN SSR 2
KAZUYA SSL
KING SSR 1 2
KUMA SSR
LARS SSR
LAW SSR 1
LEE SSL
LEO SSR
LEROY SSL
LILI SSL
NINA SSR 1 2
PANDA SSR
PAUL SSR 1 2
RAVEN SSL 1
REINA SSL 2
SHAHEEN SSR
STEVE SSL 2
VICTOR SSR
XIAOYU SSL 2
YOSHI SSL
ZAFINA SSL	
EDDY SSR
LIDIA SSR
HEIHACHI SSL
CLIVE SSR
ANNA SSR
FAHK SSR
ARMOR KING SSR 1 2
MIARYZO SSL
*/

// c++ -Wall -Wextra -Werror t8.cpp -o ft8