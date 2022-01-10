package main
import (
	"fmt"
	"bufio"
	"os"
	"container/list"
)
func main(){
	var leng, A, B int
	read := bufio.NewReader(os.Stdin)
	fmt.Scanf("%d",&leng)
	var p_leng = list.New()

	for i:=0; i<leng; i++{
		fmt.Fscan(read,&A,&B)
		p_leng.PushBack(A+B)
	}
	e:=p_leng.Front()
	for i:=1; i<=leng || e!=nil; i++{
		fmt.Printf("Case #%d: %d\n",i,e.Value)
		e=e.Next()
	}
}