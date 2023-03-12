#ifndef TDD_FIZZBUZZ
#define TDD_FIZZBUZZ

#include <vector>
#include <string>

inline std::string fizz_buzz (const int number) noexcept
{
	const std::vector<std::pair<int, std::string>> multiples {
		std::make_pair(3, "Fizz"),
		std::make_pair(5, "Buzz"),
	};
	std::string result;

	for (auto const & mult : multiples)
		if (number % mult.first == 0)
			result += mult.second;

	if (result.empty())
		result = std::to_string(number);

	return result;
}

#endif
