package main
import (
	"fmt"
	"bufio"
	"os"
)
func main(){
	var N int
	var Quiz string
	fmt.Scanln(&N)

	read := bufio.NewReader(os.Stdin)
	write := bufio.NewWriter(os.Stdout)

	for i:=0; i<N; i++{
		fmt.Fscanln(read,&Quiz)
		length := ox(Quiz)
		fmt.Fprintln(write,length)
	}
	write.Flush()
}
func ox(Quiz string) int{
	var S int = 0
	var i, j int
	for i=0; i<len(Quiz); i++{
		var C int = 0

		for j=i; j<len(Quiz); j++{
			if Quiz[j] == 'O'{
				C++
				S += C
			}else{
				break
			}
		}
		i=j
	}
	return S
}