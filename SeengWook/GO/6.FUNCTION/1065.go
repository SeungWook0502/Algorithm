package main
import (
	"fmt"
	"strconv"
)
func main(){
	var N int
	var Cnt int = 0

	fmt.Scanln(&N)

	for i:=1; i<=N; i++{
		i_slice := strconv.Itoa(i)
		if len(i_slice)<=2{
			Cnt++
		}else{
			T := i_slice[0]-i_slice[1]
			Check := 0
			for j:=1; j<(len(i_slice)-1); j++{
				
				if i_slice[j]-i_slice[j+1] == T{
					Check++
				}else{
					break
				}
			}
			if Check >=(len(i_slice)-2){
				Cnt++
			}
		}
	}
	fmt.Print(Cnt)
}