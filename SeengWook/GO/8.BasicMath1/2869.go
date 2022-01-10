package main
import (
	"fmt"
	"bufio"
	"os"
)
func main(){
	var A, B, V int
	Read := bufio.NewReader(os.Stdin)

	fmt.Fscan(Read, &A, &B, &V)
	if (V-A)%(A-B)==0{
		fmt.Print((V-A)/(A-B)+1)
	}else{
		fmt.Print((V-A)/(A-B)+2)
	}
}