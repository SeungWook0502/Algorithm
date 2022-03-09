package main
import (
	"fmt"
	"bufio"
	"os"
)
func main(){
	var N, C int = 0, 0
	var S string
	Read := bufio.NewReader(os.Stdin)

	fmt.Scanln(&N)

	S_list := make([]string,0)

	for i:=0; i<N; i++{
		fmt.Fscanln(Read,&S)
		S_list = append(S_list,S)
	}
	for i:=0; i<N; i++{
		var P int = 0
		T_list := make([]string,0)
		for j:=0; j<len(S_list[i]); j++{
			if 0 == len(T_list){
				T_list = append(T_list,string(S_list[i][j]))
				P++
			}else if string(S_list[i][j]) == T_list[P-1]{
			}else{
				T_list = append(T_list,string(S_list[i][j]))
				P++
			}
		}
		T := true
		for j:=0; j<P; j++{
			for l:=0; l<P; l++{
				// fmt.Println(T_list[j],T_list[l])
				if T_list[j]==T_list[l] && l!=j{
					T = false
					break
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
	fmt.Print(C)
}