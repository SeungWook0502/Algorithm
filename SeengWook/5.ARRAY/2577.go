package main
import (
	"fmt"
	"strconv"
)
func main(){
	var A, B, C, N int
	var N_cnt []int = make([]int,10)

	fmt.Scanln(&A)
	fmt.Scanln(&B)
	fmt.Scanln(&C)

	N = A * B * C
	N_s := strconv.Itoa(N)

	for i:=0; i<len(N_s); i++{
		N_cnt[N_s[i]-48]++
	}

	for i:=0; i<10; i++{
		fmt.Println(N_cnt[i])
	}
}