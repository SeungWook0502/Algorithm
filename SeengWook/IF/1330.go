package main
import(
    "fmt"
)
func main(){
    var A,B int
    fmt.Scanf("%d %d",&A,&B)
    if A<B{
        fmt.Print("<")
    }else if A>B{
        fmt.Print(">")
    }else{
        fmt.Print("==")
    }
    
}