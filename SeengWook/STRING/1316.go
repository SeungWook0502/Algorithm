package main
import (
	"fmt"
	"bufio"
	"os"
)
func main(){
	var N_list []string = make([]string, 0)
	var N, C, P int = 0, 0, 0
	var S string
	Read := bufio.NewReader(os.Stdin)

	fmt.Scanln(&N)

	for i:=0; i<N; i++{
		fmt.Fscanln(Read,&S)
		T := true
		for j:=0; j<len(S); j++{
			if len(N_list) == 0{
				N_list = append(N_list, string(S[i]))
				P++
			}else{
				for _,e := range N_list{
					if string(S[i]) == e{
						if P != (i-1){
							T = false
						}
					}else{
						N_list = append(N_list,string(S[i]))
						P++
					}
				}
			}
			if !T{
				break
			}
		}
		if T{
			C++
		}
	}
	fmt.Print(C,N_list)
}