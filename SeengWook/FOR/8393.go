package main
import (
	"fmt"
	"bufio"
	"os"
)
func main(){
	var A, tot int
	read := bufio.NewReader(os.Stdin)
	fmt.Fscanln(read,&A)

	if A%2==0{
		for i:=1; i<=(A/2); i++{
			tot+= 1+A
		}
	}else{
		for i:=1; i<=(A/2); i++{
			tot+= 1+A
		}
		tot+= A/2+1
	}
	fmt.Println(tot)
}