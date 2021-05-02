// ip address validation rules no code

174.192.30.70

0260:0abf:1234:3682:5672:0eab:1111
etc->ipv6


1.no leading zeroes:
	023.6.7.8 ->invalid
2.range of no 0-255
3.should have 4 cells
4.shoudl have integer in 4 cells

-.-.-.-

ipv6
leading zeroes allowed
0s can be compressed to just 1 zero
must have 8 cells
nos in hexadecimal range
no cell should be empty

	Regex Lib
[a-c] ->a,b,c 

[ab]-> ab

[a-c]*-> abcac

[ab]+ ->ababab

[0-9]  0 1 2 3 4 5 6 7 8 one digit at a time
[0-9]*  now number of digits not matter each digit in range 0-9
[10]+  101010  10  1010 etc 
[0-9a-b] -> single char in range 0-9 or a-b 0 a b etc
[0-9a-b]* digit in range 0-9 or a-b can epeat any number of times
[2a]+ 2a 2a2a 2a2a2a etc


[0-9] -> 0 to 9
1[0-9][0-9] 100- 199 digits in range
[1-9][0-9] 10-99
2[0-4][0-9] 200-249 
25[0-5] 250-255

[0-9a-fA-F] 0, A, a, f, b, B, e, 8 etc
1 char

Repaet
[0-9]{2} 01,00,99,11 etc repeat them 2 times
[1-9][0-9]{2}  1980 4 digit numner
2[0-4][0-9]{2}  240219 etc 6 digtis


repeat in range
[1-9][0-9]{2-4}  1920 1670 etc

[0-9a-fA-f]{2-4} AF3b etc

 
special sequence
.
\\. or \\: for respective char


[1-9]|1[0-9] ->form 1 digit or 2 digit numner

[1-9]|[1-9][0-9]  can 1 git number 1-9 or 2 digut number 10-99 etc

0-255 form using or operator

expr->{[0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|2[0-5][0-5]}


etc etc etc etc


(expr\\.){3}(expr) ->entire valid ip

hexa ->0000-ffff
(([0-9a-fA-f]{1,4}\\.){7}([0-9a-fA-F]))
 

regex v4("here regulat exp")
regex_match(v4,ipv4)
cool



