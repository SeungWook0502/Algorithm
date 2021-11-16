package main
import (
	"fmt"
)
func main(){
	var N int
	var C bool = true
	fmt.Scanln(&N)
	
	for i:= (N/5); i>=0; i--{
		T := (N-(i*5))
		if T%3==0{
			fmt.Println(i*5,N-(i*5))
			fmt.Println(i+T/3)
			C = false
			break
		}
	}
	if C{
		fmt.Println(-1)
	}
}
