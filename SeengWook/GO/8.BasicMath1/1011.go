package	main
import	(
	"fmt"
	"bufio"
	"os"
)

func main(){
	var X, Y, T int
	var Read = bufio.NewReader(os.Stdin)
	var Write = bufio.NewWriter(os.Stdout)

	fmt.Scanln(&T)

	for i:=0; i<T; i++{
		fmt.Fscan(Read,&X,&Y)
		D := Y-X
		var S int = 0
		var j int
		for j = 1; D>(S+j*2); j++{
			S += j*2
		}
		if S+j>=D{
			fmt.Fprintln(Write,j*2-1)
		}else{
			fmt.Fprintln(Write,j*2)
		}
	}
	defer Write.Flush()
}