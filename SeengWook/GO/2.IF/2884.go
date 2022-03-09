package main
import (
	"fmt"
)
func main(){
	var A, B int
	fmt.Scanf("%d %d",&A,&B)

	C := B-45
	if C<0 {
		if A==0 {
			fmt.Printf("23 %d", (60+C))
		}else {
			fmt.Printf("%d %d", (A-1), (60+C))
		}
	}else {
		fmt.Printf("%d %d",A, C)
	}
}