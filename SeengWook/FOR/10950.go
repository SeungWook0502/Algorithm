package main
import (
	"fmt"
	"bufio"
	"os"
)
func main(){
	var A,B int
	var length int

	Read := bufio.NewReader(os.Stdin)
	Write := bufio.NewWriter(os.Stdout)

	fmt.Fscanln(Read,&length)

	for i:=0; i<length; i++{
		fmt.Fscanln(Read,&A,&B)
		fmt.Fprintln(Write,A+B)
	}

	Write.Flush()
}