    #if __cplusplus == 201402L
        std::cout << "C++14" << std::endl;
    #elif __cplusplus==201103L
        std::cout << "C++11" << std::endl;
    #else
        std::cout << "Old C++" << std::endl;
    #endif