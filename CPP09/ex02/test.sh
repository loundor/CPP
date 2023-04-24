make re;
./PmergeMe x y z
./PmergeMe 3 y 1
./PmergeMe 3 -2 1
./PmergeMe 5 4 3 3 2 1

./PmergeMe 1
./PmergeMe 2 1
./PmergeMe 3 2 1
./PmergeMe 4 3 2 1
./PmergeMe 5 4 3 2 1
./PmergeMe 6 5 4 3 2 1

./PmergeMe 1 2 3
./PmergeMe 3 2 1

./PmergeMe `jot -r 3000 1 1000 | tr '\n' ' '`

make fclean
