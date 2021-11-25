package main

import (
	"fmt"
	"bufio"
	"os"
)

func main() {
	var N int = 1
	Read := bufio.NewReader(os.Stdin)
	Write := bufio.NewWriter(os.Stdout)

	for N!=0{
		fmt.Fscan(Read,&N)
		var C int = 0
		for i:=N; i<=2*N; i++{
			var J bool = true
			for j:=2; j<=i/2 && i!=0; j++{
				if i%j==0{
					J = false
				}
			}
			if J{
				C++
			}
		}
		if N!=0{
			fmt.Fprintln(Write,C)
		}
	}
	Write.Flush()
}