# leet_code

here solutions will be available of leetcode and some other too.

We have done with a question of pallindrome in platform called leetcode.

# **Explanation**

1.let us take an example (121)   //which is pallindrome.

2.Now, firstly we will store it in an integer value let say t t=x

 3.then check if th number is already 0 return false.

4.start a while loop where t is decrementing

5.another variable let say a which will store mod of number

6.then another variable rev=rev*10+a;

7.decrement t divide it by 10.

**DRY_RUN**

121=x

x!=0

t=121

**121>0**

a=121%10=1(remainder)

rev=0*10+1

t=121/10=12

**121>0**

a=12%10=2

rev=1*10+2=12

t=12/10=1

**1>0**

a=1%10=1

rev=12*10+1=121

t=1/10=0

0>0//false

now, if rev==x return true else false
