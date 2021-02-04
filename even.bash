
#find out the given number is even or odd
echo -n "enter number"
read num
x=`expr $num % 2`
echo "$x"
if [ $x == 0 ]
then
     echo "even number"
else
    echo "odd number"
fi
