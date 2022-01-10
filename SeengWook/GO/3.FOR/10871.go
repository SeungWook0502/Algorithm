package main
import(
	"fmt"
	"bufio"
	"os"
	"container/list"
)
func main(){
	var N, X int
	read := bufio.NewReader(os.Stdin)
	fmt.Scanf("%d %d",&N,&X)
	var X_row = list.New()

	for i:=0; i<N; i++{
		var A int
		fmt.Fscan(read,&A)
		if A<X{
			X_row.PushBack(A)
		}
	}
	for i:=X_row.Front(); i!=nil; i=i.Next(){
		fmt.Printf("%d ",i.Value)
	}
}