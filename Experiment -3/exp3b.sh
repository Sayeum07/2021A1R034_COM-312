#get filename
echo -n "Enter File Name :"
read filename
# make sure file exists for reading
if [ ! -f $filename]
then
echo "Filename $filename does not exists"
exit 1
fi
# convert to uppercase using tr command
tr '[a-z]' '[A-Z]' <$filename

