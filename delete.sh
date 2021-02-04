
# it removes the lines from file,that contains the specified word
 
if [ $#-ne0 ]
then
     echo "enter the word"
     read word
     for fname in $*
     do
           if [ -f$fname ]
           then
                echo "the given input file name is $fname"
                grep -v "$word" $fname
           else
                echo "$fname is not a file"
           fi
      done
else
     echo "enter at least one argument as input"
fi

