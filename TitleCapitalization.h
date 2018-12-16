//
// Created by Charles Haynes on 2018-12-15.
//

#ifndef TITLECAPITALIZATION_TITLECAPITALIZATION_H
#define TITLECAPITALIZATION_TITLECAPITALIZATION_H

#include <string>
#include <vector>


class TitleCapitalization {
public:
    TitleCapitalization() = default;
    std::string ConvertToUpStyle(std::string);

private:
    std::string LowerCase(std::string word);
    std::string Capitalize(std::string word);
    std::vector<std::string> BreakTitleUp(std::string);
    bool isWordInList(std::string);
    std::string _title;
};


#endif //TITLECAPITALIZATION_TITLECAPITALIZATION_H
