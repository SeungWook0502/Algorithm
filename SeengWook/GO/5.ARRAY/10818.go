package main
import (
	"fmt"
	"bufio"
	"os"
)
func main(){
	var N int
	var max, min int
	reader := bufio.NewReader(os.Stdin)

	fmt.Scanln(&N)
	var list []int = make([]int, N)

	for i:=0; i<N; i++{
		fmt.Fscan(reader,&list[i])
		if i==0{
			max = list[i]
			min = list[i]
		}else{
			if max<list[i]{
				max=list[i]
			}
			if min>list[i]{
				min=list[i]
			}
		}
	}
	fmt.Print(min,max)
}