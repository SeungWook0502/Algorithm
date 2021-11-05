package main
import (
	"fmt"
	"bufio"
	"os"
)

func main(){
	var A, B int
	read := bufio.NewReader(os.Stdin)
	write := bufio.NewWriter(os.Stdout)
	defer write.Flush()

	for true{
		val, _ := fmt.Fscanln(read,&A,&B)
		if val != 2{
			break
		}
		fmt.Fprintln(write,A+B)
	}
}