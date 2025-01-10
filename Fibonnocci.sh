echo "Enter a number:"
read n 
x=0
y=1
echo $x
echo $y
for((i=0;i<=n;i++))
do
f=$(($x+$y))
echo $f
x=$y
y=$f
done
