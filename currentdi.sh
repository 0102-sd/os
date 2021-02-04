
#it displays all the files in the current directory which the user #has read/write/exe permissions
echo "list of files r/w/e permission"
for fname in *
do
    if [ -r$fname-a-w$fname-a-x$fname ]
    then
          echo $fname
    fi
done

