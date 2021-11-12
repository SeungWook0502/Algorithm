package main
import "fmt"
func main(){
	var A, B, C int
	var T bool = true
	fmt.Scanf("%d %d %d",&A,&B,&C)
	var i int = 1
	for T{
		if A+B*i < C*i{
			T = false
		}
		i++
		if i > 2147483640{
			i = (0)
			T = false
		}
	}
	fmt.Print(i-1)
}