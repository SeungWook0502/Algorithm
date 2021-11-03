package main
import(
	"fmt"
)
func main(){
	var A, B int
	fmt.Scanf("%d",&A)
	fmt.Scanf("%d",&B)

	if A<0{
		if B<0{
			fmt.Print("3")
		}else{
			fmt.Print("2")
		}
	}else{
		if B<0{
			fmt.Print("4")
		}else{
			fmt.Print("1")
		}
	}
}