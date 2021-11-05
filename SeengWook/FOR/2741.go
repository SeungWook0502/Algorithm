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
	for i:=1; i<N; i++{
		fmt.Fprintln(Writer,i)
	}
	fmt.Fprint(Writer,N)
	Writer.Flush()
}