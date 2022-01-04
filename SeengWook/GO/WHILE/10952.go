package main
import "fmt"

func main(){
	var A, B int
	fmt.Scan(&A, &B)
	for A != 0 || B != 0{
		fmt.Println(A+B)
		fmt.Scan(&A, &B)
	}
}