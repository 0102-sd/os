#it checks if the argument is file or directory,
#if it is a file it returns number of lines within the file
 
for x in $*
do
     if [ -f $x ]
     then
            echo "$x is a file"
            echo "no. of lines:"`cat $x|wc -l`
     elif [ -d $x ]
     then
            echo "$x is a directory"
     else
             echo "enter valid argument"
     fi
done
