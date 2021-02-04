#this will display number of lines from any document
 
echo "enter file name"
read fname
  
echo "enter starting line number"
read sl
 
echo "enter ending line number"
read el
 
d=`expr $el - $sl`
echo "difference = $d"
 
if [ -f$fname ]
then
         echo "the line between $sl and $el line numbers are:"
         head -$el $fname | tail -$d
else
         echo "file does not exist"
fi
