package main
import (
	"fmt"
	"strconv"
)
func main(){
	var N1, N2 string
	fmt.Scanf("%s %s",&N1,&N2)

	var T1, T2 string = string(N1[2]), string(N2[2])
	T1 = T1+string(N1[1])
	T1 = T1+string(N1[0])
	T2 = T2+string(N2[1])
	T2 = T2+string(N2[0])
	R1,_ := strconv.Atoi(T1)
	R2,_ := strconv.Atoi(T2)
	if R1>R2{
		fmt.Print(R1)
	}else{
		fmt.Print(R2)
	}
}