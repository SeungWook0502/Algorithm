package main
import "fmt"
func main(){
	var S string
	fmt.Scanln(&S)
	var T int = 0
	for i:=0; i<len(S); i++{
		if int(S[i])<68{
			T+=3
		}else if int(S[i])<71{
			T+=4
		}else if int(S[i])<74{
			T+=5
		}else if int(S[i])<77{
			T+=6
		}else if int(S[i])<80{
			T+=7
		}else if int(S[i])<84{
			T+=8
		}else if int(S[i])<87{
			T+=9
		}else{
			T+=10
		}
	}
	fmt.Print(T)
}