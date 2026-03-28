#include <iostream>

#define COLOR_NORMAL        ""
#define COLOR_RESET         "\033[m"
#define COLOR_BOLD          "\033[1m"
#define COLOR_BLACK         "\033[30m"
#define COLOR_RED           "\033[31m"
#define COLOR_GREEN         "\033[32m"
#define COLOR_YELLOW        "\033[33m"
#define COLOR_BLUE          "\033[34m"
#define COLOR_MAGENTA       "\033[35m"
#define COLOR_CYAN          "\033[36m"
#define COLOR_WHITE         "\033[37m"
#define COLOR_DEFAULT       "\033[39m"
#define COLOR_BOLD_BLACK    "\033[1;30m"
#define COLOR_BOLD_RED      "\033[1;31m"
#define COLOR_BOLD_GREEN    "\033[1;32m"
#define COLOR_BOLD_YELLOW   "\033[1;33m"
#define COLOR_BOLD_BLUE     "\033[1;34m"
#define COLOR_BOLD_MAGENTA  "\033[1;35m"
#define COLOR_BOLD_CYAN     "\033[1;36m"
#define COLOR_BOLD_WHITE    "\033[1;37m"
#define COLOR_BOLD_DEFAULT  "\033[1;39m"
#define COLOR_FAINT_BLACK   "\033[2;30m"
#define COLOR_FAINT_RED     "\033[2;31m"
#define COLOR_FAINT_GREEN   "\033[2;32m"
#define COLOR_FAINT_YELLOW  "\033[2;33m"
#define COLOR_FAINT_BLUE    "\033[2;34m"
#define COLOR_FAINT_MAGENTA "\033[2;35m"
#define COLOR_FAINT_CYAN    "\033[2;36m"
#define COLOR_FAINT_WHITE   "\033[2;37m"
#define COLOR_FAINT_DEFAULT "\033[2;39m"
#define COLOR_BG_BLACK      "\033[40m"
#define COLOR_BG_RED        "\033[41m"
#define COLOR_BG_GREEN      "\033[42m"
#define COLOR_BG_YELLOW     "\033[43m"
#define COLOR_BG_BLUE       "\033[44m"
#define COLOR_BG_MAGENTA    "\033[45m"
#define COLOR_BG_CYAN       "\033[46m"
#define COLOR_BG_WHITE      "\033[47m"
#define COLOR_BG_DEFAULT    "\033[49m"
#define COLOR_FAINT         "\033[2m"
#define COLOR_FAINT_ITALIC  "\033[2;3m"
#define COLOR_REVERSE       "\033[7m"

int main() {
std::cout << COLOR_NORMAL           <<  "\"\" "        << "COLOR_NORMAL"          << COLOR_RESET << std::endl;
std::cout << COLOR_RESET            <<  "\\033[m "     << "COLOR_RESET"           << COLOR_RESET << std::endl;
std::cout << COLOR_BOLD             <<  "\\033[1m "    << "COLOR_BOLD"            << COLOR_RESET << std::endl;
std::cout << COLOR_BLACK            <<  "\\033[30m "   << "COLOR_BLACK"           << COLOR_RESET << std::endl;
std::cout << COLOR_RED              <<  "\\033[31m "   << "COLOR_RED"             << COLOR_RESET << std::endl;
std::cout << COLOR_GREEN            <<  "\\033[32m "   << "COLOR_GREEN"           << COLOR_RESET << std::endl;
std::cout << COLOR_YELLOW           <<  "\\033[33m "   << "COLOR_YELLOW"          << COLOR_RESET << std::endl;
std::cout << COLOR_BLUE             <<  "\\033[34m "   << "COLOR_BLUE"            << COLOR_RESET << std::endl;
std::cout << COLOR_MAGENTA          <<  "\\033[35m "   << "COLOR_MAGENTA"         << COLOR_RESET << std::endl;
std::cout << COLOR_CYAN             <<  "\\033[36m "   << "COLOR_CYAN"            << COLOR_RESET << std::endl;
std::cout << COLOR_WHITE            <<  "\\033[37m "   << "COLOR_WHITE"           << COLOR_RESET << std::endl;
std::cout << COLOR_DEFAULT          <<  "\\033[39m "   << "COLOR_DEFAULT"         << COLOR_RESET << std::endl;
std::cout << COLOR_BOLD_BLACK       <<  "\\033[1;30m " << "COLOR_BOLD_BLACK"      << COLOR_RESET << std::endl;
std::cout << COLOR_BOLD_RED         <<  "\\033[1;31m " << "COLOR_BOLD_RED"        << COLOR_RESET << std::endl;
std::cout << COLOR_BOLD_GREEN       <<  "\\033[1;32m " << "COLOR_BOLD_GREEN"      << COLOR_RESET << std::endl;
std::cout << COLOR_BOLD_YELLOW      <<  "\\033[1;33m " << "COLOR_BOLD_YELLOW"     << COLOR_RESET << std::endl;
std::cout << COLOR_BOLD_BLUE        <<  "\\033[1;34m " << "COLOR_BOLD_BLUE"       << COLOR_RESET << std::endl;
std::cout << COLOR_BOLD_MAGENTA     <<  "\\033[1;35m " << "COLOR_BOLD_MAGENTA"    << COLOR_RESET << std::endl;
std::cout << COLOR_BOLD_CYAN        <<  "\\033[1;36m " << "COLOR_BOLD_CYAN"       << COLOR_RESET << std::endl;
std::cout << COLOR_BOLD_WHITE       <<  "\\033[1;37m " << "COLOR_BOLD_WHITE"      << COLOR_RESET << std::endl;
std::cout << COLOR_BOLD_DEFAULT     <<  "\\033[1;39m " << "COLOR_BOLD_DEFAULT"    << COLOR_RESET << std::endl;
std::cout << COLOR_FAINT_BLACK      <<  "\\033[2;30m " << "COLOR_FAINT_BLACK"     << COLOR_RESET << std::endl;
std::cout << COLOR_FAINT_RED        <<  "\\033[2;31m " << "COLOR_FAINT_RED"       << COLOR_RESET << std::endl;
std::cout << COLOR_FAINT_GREEN      <<  "\\033[2;32m " << "COLOR_FAINT_GREEN"     << COLOR_RESET << std::endl;
std::cout << COLOR_FAINT_YELLOW     <<  "\\033[2;33m " << "COLOR_FAINT_YELLOW"    << COLOR_RESET << std::endl;
std::cout << COLOR_FAINT_BLUE       <<  "\\033[2;34m " << "COLOR_FAINT_BLUE"      << COLOR_RESET << std::endl;
std::cout << COLOR_FAINT_MAGENTA    <<  "\\033[2;35m " << "COLOR_FAINT_MAGENTA"   << COLOR_RESET << std::endl;
std::cout << COLOR_FAINT_CYAN       <<  "\\033[2;36m " << "COLOR_FAINT_CYAN"      << COLOR_RESET << std::endl;
std::cout << COLOR_FAINT_WHITE      <<  "\\033[2;37m " << "COLOR_FAINT_WHITE"     << COLOR_RESET << std::endl;
std::cout << COLOR_FAINT_DEFAULT    <<  "\\033[2;39m " << "COLOR_FAINT_DEFAULT"   << COLOR_RESET << std::endl;
std::cout << COLOR_BG_BLACK         <<  "\\033[40m "   << "COLOR_BG_BLACK"        << COLOR_RESET << std::endl;
std::cout << COLOR_BG_RED           <<  "\\033[41m "   << "COLOR_BG_RED"          << COLOR_RESET << std::endl;
std::cout << COLOR_BG_GREEN         <<  "\\033[42m "   << "COLOR_BG_GREEN"        << COLOR_RESET << std::endl;
std::cout << COLOR_BG_YELLOW        <<  "\\033[43m "   << "COLOR_BG_YELLOW"       << COLOR_RESET << std::endl;
std::cout << COLOR_BG_BLUE          <<  "\\033[44m "   << "COLOR_BG_BLUE"         << COLOR_RESET << std::endl;
std::cout << COLOR_BG_MAGENTA       <<  "\\033[45m "   << "COLOR_BG_MAGENTA"      << COLOR_RESET << std::endl;
std::cout << COLOR_BG_CYAN          <<  "\\033[46m "   << "COLOR_BG_CYAN"         << COLOR_RESET << std::endl;
std::cout << COLOR_BG_WHITE         <<  "\\033[47m "   << "COLOR_BG_WHITE"        << COLOR_RESET << std::endl;
std::cout << COLOR_BG_DEFAULT       <<  "\\033[49m "   << "COLOR_BG_DEFAULT"      << COLOR_RESET << std::endl;
std::cout << COLOR_FAINT            <<  "\\033[2m "    << "COLOR_FAINT"           << COLOR_RESET << std::endl;
std::cout << COLOR_FAINT_ITALIC     <<  "\\033[2;3m "  << "COLOR_FAINT_ITALIC"    << COLOR_RESET << std::endl;
std::cout << COLOR_REVERSE          <<  "\\033[7m "    << "COLOR_REVERSE"         << COLOR_RESET << std::endl;
    return 0;
}
//c++ -Wall -Wextra -Werror -std=c++98 colors.cpp -o fcolors
