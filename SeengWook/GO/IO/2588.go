package main
import(
    "fmt"
)
func main(){
    var A,B int
    fmt.Scanf("%d",&A)
    fmt.Scanf("%d",&B)
    fmt.Println(A*(B%10))
    fmt.Println(A*(((B%100)-(B%10))/10))
    fmt.Println(A*((B-B%100)/100))
    fmt.Println(A*B)
}