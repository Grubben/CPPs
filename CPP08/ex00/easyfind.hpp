#include <algorithm>

template <typename T>
typename T::iterator    easyfind(T container, int findme)
{
    typename T::iterator caught;
    caught = std::find(container.begin(), container.end(), findme);

    // std::cout << *(container.end()) << std::endl;

    if (caught == container.end())
        throw std::invalid_argument("Value could not be found");
    else
        return caught;
}