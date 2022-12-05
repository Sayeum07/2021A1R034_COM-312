if [ $# -eq 0 ]
then
echo NO ARGUMENTS
else
pattern=$1
shift
for fname in $*
do
if [ -f $fname ]
then
echo DELETING: $pattern FROM: $fname
sed '/'$pattern'/d' $fname

else
echo $fname : FILE NAME NOT FOUND
fi
done
fi
