package main
import "fmt"
func main(){
	var N int
	var T int = 0
	var Num string

	fmt.Scanln(&N)
	fmt.Scanln(&Num)

	slc := []byte(Num)
	for _,e := range slc{
		T += int(e)-48
	}
	fmt.Print(T)
}