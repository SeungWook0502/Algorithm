package main
import (
	"fmt"
	"strconv"
	"sort"
)

func main(){
	var N int
	list := make([]int,0)
	for i:=1; i<=10000; i++{
		N = i
		T := strconv.Itoa(i)
		for j:=0; j<len(T); j++{
			N+=int(T[j])-48
			// fmt.Println(i,N)
		}
		if len(list)==0{
			list = append(list,N)
		}else if find_element(list, N){
			list = append(list,N)
		}

	}
	sort.Slice(list, func(i,j int)bool{
		return list[i] < list[j]
	})
	for i:=1;i<=10000;i++{
		if find_element(list, i){
			fmt.Println(i)
		}
	}
}

func find_element(list []int, N int) bool{
	for _,e := range list{
		if N == e{
			return false
		}
	}
	return true
}