package main
import (
	"fmt"
)
func main(){
	var M, N int
	fmt.Scanln(&M, &N)

	for i:=M; i<=N; i++{
		var J bool = true
		if i!=1{
			for j:=2; j<=i/2; j++{
				if i%j==0{
					J = false
				}
			}
			if J{
				fmt.Println(i)
			}
		}
	}
}