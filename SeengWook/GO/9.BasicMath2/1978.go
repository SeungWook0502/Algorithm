package main
import (
	"fmt"
	"bufio"
	"os"
)
func main(){
	var N, C int = 0, 0
	fmt.Scanln(&N)
	var T []int = make([]int,N)
	Read := bufio.NewReader(os.Stdin)
	Write := bufio.NewWriter(os.Stdout)

	for i:=0; i<N; i++{
		fmt.Fscan(Read,&T[i])
		var B bool = false
		if T[i]!=1 && T[i]!=2{
			for j:=2; j<T[i]; j++{
				fmt.Fprint(Write, T[i],"%",j,"=",T[i]%j)
				if (T[i])%j==0{
					B = false
					break
				}else{
					B = true
				}
				fmt.Fprintln(Write,B)
			}
			fmt.Fprintln(Write,"   ===    ",T[i],B,C)
		}else if T[i]==2{
			C++
		}
		if B{
			C++
		}
	}
	fmt.Fprint(Write,C)
	defer Write.Flush()
}