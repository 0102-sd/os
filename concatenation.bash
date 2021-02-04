#concatenation of two strings
string1="ubuntu"
string2="Pit"
 string=$string1$string2
 echo "$string is great resource for linux"
[root@localhost ~]# chmod +x p2.sh
[root@localhost ~]# sh  p2.sh
ubuntuPit is great resource for linux



#slicing a string
 str="Learn bash commands from ubuntupit"
 substr=${str:0:10}
 echo $substr
