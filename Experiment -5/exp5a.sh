echo "String: WE welcome you in operating system Lab."
str="We welcome you in Operating system Lab."
substr="${str:0:10}"
substr2="${str:-3:4}"
substr3="${str:10:24}"
echo -e "\nExtracting the subtring from index 0 upto index 10: $substr\n"

echo -e "\nExtracting the substring from index -3 upto index 4: $substr2\n"

echo -e "\nExtracting the substring from index 10 upto index 24: $substr3\n" 
