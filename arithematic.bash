
#perform arithmetic operations
echo "enter first number"
read x
 
echo "enter second number"
read y
 
sum=`expr $x + $y`
sub=`expr $x - $y`
mul=`expr $x \* $y`
div=`expr $x / $y`
module=`expr $x % $y`
 
echo "sum=$sum"
echo "sub=$sub"
echo "mul=$mul"
echo "div=$div"
echo "module=$module"
 
