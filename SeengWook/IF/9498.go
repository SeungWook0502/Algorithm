package main
import(
    "fmt"
)
func main(){
    var A int
    fmt.Scanf("%d",&A)
    if A>=90{
        fmt.Println("A")
    }else if A>=80{
        fmt.Println("B")
    }else if A>=70{
        fmt.Println("C")
    }else if A>=60{
        fmt.Println("D")
    }else{
        fmt.Println("F")
    }
}