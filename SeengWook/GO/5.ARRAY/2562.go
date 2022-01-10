package main
import (
	"fmt"
)
func main(){
	var N int
	var max, mi int = 0, 0

	for i:=0; i<9; i++{
		fmt.Scanf("%d\n",&N)
		if max < N{
			max = N
			mi = i
		}
	}
	fmt.Print(max,"\n",mi+1)
}