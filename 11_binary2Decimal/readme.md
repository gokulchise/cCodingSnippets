#To convert from binary to decimal value
###Binary number :     1 0 1 0 1    -> b4 b3 b2 b1 b0                          

##Logic:
1. Count the Binary digits.

2. Find lastDigit and Multiply with its placeValue:      
    -> b0 * pow(2,0)    -> 1 * 2^0  -> 1        \
    -> b1 * pow(2,1)    -> 0 * 2^1  -> 0        \
    -> b2 * pow(2,2)    -> 1 * 2^2  -> 4        \
    -> b3 * pow(2,3)    -> 0 * 2^3  -> 0        \
    -> b4 * pow(2,4)    -> 1 * 2^4  -> 16       \

3. Add them and get Decimal value of its:
    -> b4 + b3 + b2 + b1 + b0   -> 16 + 0 + 4 + 0 + 1   -> 21

###Decimal number: 21                             
