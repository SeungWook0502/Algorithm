package main
import(
    "fmt"
)
func main(){
    var A int
    fmt.Scanf("%d",&A)
    if A%4==0{
        if A%100 == 0{
            if A%400 == 0{
                fmt.Println("1")
            }else{
                fmt.Println("0")
            }
        }else{
            fmt.Println("1")
        }
    }else{
        fmt.Println("0")
    }
}