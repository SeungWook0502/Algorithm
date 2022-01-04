package main
import(
	"fmt"
)
func main(){
	var N int
	fmt.Scanf("%d",&N)
	for i:=1; i<=N; i++{
		for j:=0; j<i; j++{
			fmt.Print("*")
		}
		fmt.Println()
	}

}