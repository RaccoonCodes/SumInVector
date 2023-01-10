# SumInVector
Ask to input numbers into list and prints total sum

Creates a Vector called nums and ask user to enter the amount of numbers that they wish to enter into the vector.
After that, it ask to input the numbers that they wish to put into the vector. The amount that they wish to enter
will serve as a guard for them in case they put more numbers. 

First function it will call is the printout function, which just prints all the numbers in the vectors.After the 
call, it will call on SumTotal.Both printout and SumTotal function uses pass by const reference since we don't know 
how big our vector will get and to help optimize the output.
