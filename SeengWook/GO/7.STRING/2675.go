package main
import (
	"fmt"
)
func main(){
	var R int
	fmt.Scanln(&R)

	var N []int = make([]int,R)
	var S []string = make([]string,R)

	for i:=0; i<R; i++{
		fmt.Scanf("%d %s\n",&N[i],&S[i])
	}

	for i:=0; i<R; i++{
		T := []byte(S[i])
		for j:=0; j<len(T); j++{
			for l:=0; l<N[i]; l++{
				fmt.Print(string(T[j]))
			}
		}
		fmt.Println()
	}
}