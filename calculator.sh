echo "Enter a number:"
read a
echo "Enter another number:"
read b
echo "Enter the operation:"
echo "1.Addition"
echo "2.Substraction"
echo "3.Multiplication"
echo "4.Division"
read op
case $op in
1)sum=$(($a+$b))
echo "sum="$sum;;
2)sub=$(($a-$b))
echo "result="$sub;;
3)multi=$(($a*$b))
echo "result="$multi;;
4)div=$(($a/$b))
echo "result="$div;;
*)echo "wrong choice";;
esac
