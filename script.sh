g++ test_util_boy.cpp
./a.out
g++ test_util_girl.cpp
./a.out
g++ test_util_gifts.cpp
./a.out
g++ -c most_attr.cpp
g++ -c most_intl.cpp
g++ -c most_rich.cpp
g++ -c gifts.cpp
g++ -c initialize.cpp
g++ -c couple.cpp
ar rvs library_file *.o
g++ question1.cpp library_file
./a.out
g++ question2.cpp library_file
./a.out
g++ question4.cpp library_file
./a.out

