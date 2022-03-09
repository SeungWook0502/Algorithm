package main
import(
	"fmt"
	"bufio"
	"os"
)
func main(){
	var N int
	Reader := bufio.NewReader(os.Stdin)
	Writer := bufio.NewWriter(os.Stdout)
	fmt.Fscanln(Reader,&N)
	for i:=N; 1<i; i--{
		fmt.Fprintln(Writer,i)
	}
	fmt.Fprint(Writer,1)
	Writer.Flush()
}