package main
import (
	"fmt"
	"bufio"
	"os"
)
func main(){
	var T int
	var K, N int
	Read := bufio.NewReader(os.Stdin)
	Write := bufio.NewWriter(os.Stdout)

	fmt.Scanln(&T)

	for i:=0; i<T; i++{
		fmt.Fscanln(Read,&N)
		fmt.Fscanln(Read,&K)
		_,A := pac(N+K)
		_,B := pac(N+1)
		_,C := pac((N+K)-(N+1))
		fmt.Fprintln(Write, A/(B*C))
	}
	Write.Flush()
}

func pac(NK int) (int, int){
	var cnt, tot int = NK, 1

	if NK != 1{
		cnt, tot = pac(NK-1)
	}

	return cnt+1, tot*cnt
}