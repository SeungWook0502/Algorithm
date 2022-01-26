package main
import(
    "fmt"
)
func main(){
    var A,B,C int
    fmt.Scanf("%d %d %d",&A,&B,&C)
    fmt.Print((A+B)%C,"\n",((A%C) + (B%C))%C,"\n",(A*B)%C,"\n",((A%C) * (B%C))%C)
}