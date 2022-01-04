package main
import "fmt"
func main(){
	var N, Cmp_A, Cmp_B int
	var Cnt int = 1
	fmt.Scan(&N)

	Cmp_A = N/10 + N%10
	Cmp_B = N%10

	for N != (Cmp_B*10)+(Cmp_A%10){
		temp := Cmp_B
		Cmp_B = (Cmp_A%10)
		Cmp_A = (Cmp_B*10)+(temp+Cmp_B)%10
		Cnt++
	}
	fmt.Print(Cnt)

}