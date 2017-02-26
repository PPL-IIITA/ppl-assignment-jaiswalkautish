# ppl-assignment-jaiswalkautish
ppl-assignment-jaiswalkautish created by GitHub Classroom

Kautish Jaiswal

IIT2015506

Section - B

Step 1: To Generate random input data
  >```
	-> Run g++ test_util_boy.cpp
	-> Run ./a.out
	-> Run g++ test_util_girl.cpp
	-> Run ./a.out 
	-> Run g++ test_util_gifts.cpp
	-> Run ./a.out
  ```
Step 2: To create Library
  >```
	Run:
	-> g++ -c couple.cpp
	-> g++ -c gifts.cpp
	-> g++ -c initialize.cpp
	-> g++ -c most_attr.cpp
	-> g++ -c most_intl.cpp
	-> g++ -c most_rich.cpp
	-> ar rvs library_file *.o 
   ```
Step 3: To get the outputs of the questions
>```
	g++ main.cpp library_file
```

To see Outputs:

###For question 1
```
To View Couples formed:
  Open couples.txt
```

###For question 2
```
To View K-Most Happiest Couples:
  Open sorted_happiness.txt 
  
To View K-Most Compatible Couples:
  Open sorted_compatibility.txt
  
(for randomly generated K)
  
To View the Exchanges of gifts that took place between the formed couples:
	 Open gift_exchange.txt
```
To view Documentation:
Go to:
>```
	documentation/html/index.html
```
