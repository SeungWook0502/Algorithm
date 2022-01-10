package main
import (
	"fmt"
)
func main(){
	N_list := make([]int,10)
	var C_pointer int = 0
	C_list := []int{43,43,43,43,43,43,43,43,43,43}
	for i:=0;i<10;i++{
		fmt.Scanln(&N_list[i])
		N_list[i]=N_list[i]%42
	}

	for i:=0;i<10;i++{

		var C_cnt int = 0
		for j:=0; j<10; j++{
			if N_list[i]!=C_list[j]{
				C_cnt++
			}
		}
		if C_cnt==10{
			C_list[C_pointer] = N_list[i]
			C_pointer++
		}
	}
	fmt.Println(C_pointer)
}