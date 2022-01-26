package main
import "fmt"
func main(){
	var N string
	fmt.Scanln(&N)
	asc := []byte(N)
	fmt.Println(asc[0])
}