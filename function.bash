#function in bash
function operations()
{
read x
read y
echo "sum is: $(($x+$y))"
echo "difference is: $(($x-$y))"
}
val=$(operations)
echo "$val"
