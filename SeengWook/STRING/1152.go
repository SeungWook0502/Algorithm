package main
import (
	"fmt"
	"bufio"
	"os"
	"strings"
)
func main(){
	Read := bufio.NewReader(os.Stdin)
	line, _ := Read.ReadString('\n')

	T := strings.Split(line, " ")

	var C int = 0
	for _, e := range T {
		if e!=""{
			if e[0]>=65 && e[0]<=122{
				C++
			}
		}
	}

	fmt.Print(C)
}