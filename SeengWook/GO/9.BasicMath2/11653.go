package main
import (
	"fmt"
)
func main(){
	var N int

	fmt.Scan(&N)
	if N!=1{
		C := N
		for C > 1{
			for i:=2; i <= C; i++{
				if C%i==0{
					fmt.Println(i)
					C=C/i
					break
				}
			}
		}
	}
}