echo "enter the filename "
read fname
echo "enter the starting line number "
read s
echo "enter the ending line number "
read n
sed -n $s,$n\p $fname | cat > new1.txt
cat new1.txt
