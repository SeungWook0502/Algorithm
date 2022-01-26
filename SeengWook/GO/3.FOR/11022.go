package main
import (
	"fmt"
	"bufio"
	"os"
)
type List struct{
	A [3]int
}
func main(){
	var leng, A, B int
	read := bufio.NewReader(os.Stdin)
	write := bufio.NewWriter(os.Stdout)
	fmt.Fscanln(read,&leng)

	for i:=1; i<=leng; i++{
		fmt.Fscanln(read,&A,&B)
		fmt.Fprintf(write,"Case #%d: %d + %d = %d\n",i,A,B,A+B)
	}
	write.Flush()
}