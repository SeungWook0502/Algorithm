package main
import (
	"fmt"
)
func main(){
	var M, N int
	var T, Min int = 0, 0
	var C, MinC bool = true, true
	fmt.Scan(&M, &N)

	for i:=M; i<=N; i++{
		var J bool = true
		if i!=1{
			for j:=2; j<=i/2; j++{
				if i%j==0{
					J = false
				}
			}
			if J{
				C = false
				T = T + i
			}
			if !C && MinC{
				Min = i
				MinC = false
			}
		}
	}
	if C{
		fmt.Println("-1")
	}else{
		fmt.Println(T)
		fmt.Println(Min)
	}
}