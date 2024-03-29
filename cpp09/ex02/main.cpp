#include "PmergeMe.hpp"

bool flag = false;
unsigned int tmp;
bool after = false;

template <typename T, typename S, typename V>
void    algo(int ac, T &container, S &cont, V &conta, char choice)
{
    struct timeval start, end;
    long sec, micro;

    gettimeofday(&start, NULL);
    for (size_t i = 0; i < container.size(); i++)
    {
        if (container[i].first > container[i].second)
            std::swap(container[i].first, container[i].second);
    }

    for (size_t i = 0; i < container.size(); i++)
        conta.push_back(container[i].first);

    for (size_t i = 0; i < container.size(); i++)
        cont.push_back(container[i].second);

    std::sort(conta.begin(), conta.end());

    for (size_t i = 0; i < cont.size(); i++)
        conta.insert(std::lower_bound(begin(conta), conta.end(), cont[i]), cont[i]);
    if (flag)
        conta.insert(std::lower_bound(conta.begin(), conta.end(), tmp), tmp);
    gettimeofday(&end, NULL);
    if(!after)
    {
        std::cout << "\nAfter  : "; 
        if (ac < 6)
        {
            for (size_t i = 0; i < conta.size(); i++)
            std::cout << conta[i] << " ";
        }
        else
        {
            for (size_t i = 0; i < 5; i++)
            std::cout << conta[i] << " ";
            std::cout << "[...]";
        }
        after = true;
    }

    sec = end.tv_sec - start.tv_sec;
    micro = end.tv_usec - start.tv_usec;
    double diff = sec + (1.0/100000) * micro;
    if (choice == 'v')
        std::cout << std::fixed<< "\nTime to process a range of " << ac << " elements with std::vector : " << diff << " us";
    if (choice == 'd')
        std::cout << std::fixed<<  "\nTime to process a range of " << ac << " elements with std::deque  : " << diff<<" us" << "\n";
}


int main(int ac, char *av[])
{

    if(!checkArgs(ac, av))
    {
        std::cerr << "Invalid Input: Argument must be positive intager\n";
        exit(0);
    }
    if ((ac - 1) % 2 != 0)
    {
        flag = true;
        tmp = std::atoi(av[ac - 1]);
        if (std::atoi(av[ac - 1]) < 0)
            exit(1);
        ac-=1;
    }

    std::cout << "Before : "; 
    if (ac < 6)
    {
        if(flag)
            for (int i = 1; i <= ac; i++)
                std::cout << av[i] <<" ";
        else
            for (int i = 1; i < ac; i++)
                std::cout << av[i] <<" ";
    }
    else
    {
        for (size_t i = 1; i < 6; i++)
            std::cout << av[i] << " ";
        std::cout << "[...]";
    }

        std::vector<std::pair<unsigned int, unsigned int> > vec;
        for (int i = 1; i < ac; i+=2)
        {
            if ((isdigit(av[i][0]) || av[i][0] == '+'))
            {
                checkInput(av[i], av[i + 1]);    
                vec.push_back(std::make_pair(std::atoi(av[i]), std::atoi(av[i + 1])));
            }
        }
        std::vector<unsigned int> vec_a, vec_b;
        algo(ac, vec, vec_a, vec_b, 'v');

        //-----------------------------------------------------

        std::deque<std::pair<unsigned int, unsigned int> > dec;
        for (int i = 1; i < ac; i+=2)
        {
            if (isdigit(*av[i]))
            {
                checkInput(av[i], av[i + 1]);    
                dec.push_back(std::make_pair(std::atoi(av[i]), std::atoi(av[i + 1])));
            }
        }
        std::deque<unsigned int> dec_a, dec_b;
        algo(ac, dec, dec_a, dec_b, 'd');
}