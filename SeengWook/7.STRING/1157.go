package main
import (
	"fmt"
	"bufio"
	"os"
)
func main(){
	Arpa := make([]int,26)
	for i:=0;i<26;i++{ Arpa[i] = 0 }
	var S string
	Read := bufio.NewReader(os.Stdin)
	fmt.Fscanln(Read,&S)
	// fmt.Scanln(&S)

	B := []byte(S)
	for _, e := range B{
		if e>=97{
			Arpa[e-97]++
		}else{
			Arpa[e-65]++
		}
	}
	var max, mi int = 0, 0

	for i:=0; i<26; i++{
		if max < Arpa[i]{
			max = Arpa[i]
			mi = i
		}
	}
	var miss bool = false
	for i:=0; i<26; i++{
		if max == Arpa[i]{
			if mi != i{
				miss = true
			}
		}
	}
	if miss{
		fmt.Print("?")
	}else{
		fmt.Print(string(mi+65))
	}
}