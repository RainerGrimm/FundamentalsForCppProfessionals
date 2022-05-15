#include <regex>
#include <iostream>
#include <string>

int main(){

  std::cout << '\n';

  std::string emailText = "A text with an email address: rainer@grimm-jaud.de.";

  // regular expression for the email address
  std::string regExprStr(R"(([\w.%+-]+)@([\w.-]+\.[a-zA-Z]{2,4}))");

  // regular expression holder
  std::regex rgx(regExprStr);

  // search result holder
  std::smatch smatch;

  // searching for a match
  if (std::regex_search(emailText, smatch, rgx)){

    std::cout << "Text: " << emailText << '\n';
    std::cout << '\n';
    std::cout << "Before the email address: " << smatch.prefix() << '\n';
    std::cout << "After the email address: " << smatch.suffix() << '\n';
    std::cout << '\n';
    std::cout << "Length of email adress: " << smatch.length() << '\n';
    std::cout << '\n';
    std::cout << "Email address: " << smatch[0] << '\n';
    std::cout << "Local part: " << smatch[1] << '\n';
    std::cout << "Domain name: " << smatch[2] << '\n';

  }

  std::cout << '\n';

}
