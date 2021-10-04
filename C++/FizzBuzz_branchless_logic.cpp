// FizzBuzz without branches in the logic
// stl functions may use comparisons
// Author: @s0la1337

#include <iostream>
#include <string>
#include <sstream>

std::string fizzbuzz(const int candidate)
{
    std::string make_fizz = "fizz\0\0\0\0", make_buzz = "buzz\0\0\0\0", make_fizzbuzz = "fizzbuzz";
    std::string str = std::to_string(candidate);
    str.resize(8); // potential FizzBuzz
    std::string res{};
    res.resize(9);
    
    const auto is_ok_fizz = (!(candidate % 3));
    const auto is_ok_buzz = (!(candidate % 5));
    const auto is_ok_fizzbuzz = is_ok_buzz && is_ok_fizz;
    
    res[0] = make_fizzbuzz[0]*(is_ok_fizzbuzz)+make_fizz[0]*(is_ok_fizz&&!is_ok_fizzbuzz)+make_buzz[0]*(is_ok_buzz&&!is_ok_fizzbuzz)+str[0]*(!(is_ok_fizz||is_ok_buzz||is_ok_fizzbuzz));
    res[1] = make_fizzbuzz[1]*(is_ok_fizzbuzz)+make_fizz[1]*(is_ok_fizz&&!is_ok_fizzbuzz)+make_buzz[1]*(is_ok_buzz&&!is_ok_fizzbuzz)+str[1]*(!(is_ok_fizz||is_ok_buzz||is_ok_fizzbuzz));
    res[2] = make_fizzbuzz[2]*(is_ok_fizzbuzz)+make_fizz[2]*(is_ok_fizz&&!is_ok_fizzbuzz)+make_buzz[2]*(is_ok_buzz&&!is_ok_fizzbuzz)+str[2]*(!(is_ok_fizz||is_ok_buzz||is_ok_fizzbuzz));
    res[3] = make_fizzbuzz[3]*(is_ok_fizzbuzz)+make_fizz[3]*(is_ok_fizz&&!is_ok_fizzbuzz)+make_buzz[3]*(is_ok_buzz&&!is_ok_fizzbuzz)+str[3]*(!(is_ok_fizz||is_ok_buzz||is_ok_fizzbuzz));
    res[4] = make_fizzbuzz[4]*(is_ok_fizzbuzz)+make_fizz[4]*(is_ok_fizz&&!is_ok_fizzbuzz)+make_buzz[4]*(is_ok_buzz&&!is_ok_fizzbuzz)+str[4]*(!(is_ok_fizz||is_ok_buzz||is_ok_fizzbuzz));
    res[5] = make_fizzbuzz[5]*(is_ok_fizzbuzz)+make_fizz[5]*(is_ok_fizz&&!is_ok_fizzbuzz)+make_buzz[5]*(is_ok_buzz&&!is_ok_fizzbuzz)+str[5]*(!(is_ok_fizz||is_ok_buzz||is_ok_fizzbuzz));
    res[6] = make_fizzbuzz[6]*(is_ok_fizzbuzz)+make_fizz[6]*(is_ok_fizz&&!is_ok_fizzbuzz)+make_buzz[6]*(is_ok_buzz&&!is_ok_fizzbuzz)+str[6]*(!(is_ok_fizz||is_ok_buzz||is_ok_fizzbuzz));
    res[7] = make_fizzbuzz[7]*(is_ok_fizzbuzz)+make_fizz[7]*(is_ok_fizz&&!is_ok_fizzbuzz)+make_buzz[7]*(is_ok_buzz&&!is_ok_fizzbuzz)+str[7]*(!(is_ok_fizz||is_ok_buzz||is_ok_fizzbuzz));
    
    return res;
}

std::string exec_10(int &beginning)
{
    std::stringstream strstr{};
    strstr << fizzbuzz(++beginning) << '\n';
    strstr << fizzbuzz(++beginning) << '\n';
    strstr << fizzbuzz(++beginning) << '\n';
    strstr << fizzbuzz(++beginning) << '\n';
    strstr << fizzbuzz(++beginning) << '\n';
    strstr << fizzbuzz(++beginning) << '\n';
    strstr << fizzbuzz(++beginning) << '\n';
    strstr << fizzbuzz(++beginning) << '\n';
    strstr << fizzbuzz(++beginning) << '\n';
    strstr << fizzbuzz(++beginning) << '\n';
    return strstr.str();
}

std::string solve()
{
    int amount = -1;
    std::stringstream res{};
    
    res << exec_10(++amount)
        << exec_10(++amount)
        << exec_10(++amount)
        << exec_10(++amount)
        << exec_10(++amount)
        << exec_10(++amount)
        << exec_10(++amount)
        << exec_10(++amount)
        << exec_10(++amount);
        
    return res.str();
}

int main()
{
    std::cout << solve();
}