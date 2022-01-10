package main
import (
	"fmt"
	"bufio"
	"os"
)
func main(){
	var T int
	var H, W, N int

	fmt.Scanln(&T)
	Read := bufio.NewReader(os.Stdin)
	Write := bufio.NewWriter(os.Stdout)

	for i:=0; i<T; i++{
		fmt.Fscanln(Read, &H, &W, &N)
		if N%H == 0{
			fmt.Fprintln(Write, (H*100)+(N/H))
		}else{
			fmt.Fprintln(Write, (N%H*100)+(N/H)+1)
		}
	}
	Write.Flush()
}