package	main
import "fmt"
func main(){
	var S string
	var C int
	fmt.Scanln(&S)
	for i:=0; i<len(S); i++{
		if i+1 != len(S){
			if string(S[i]) == "c"{
				if string(S[i+1]) == "="{
					C++
					i+=1
				}else if string(S[i+1]) == "-"{
					C++
					i+=1
				}else {
					C++
				}
			}else if string(S[i]) == "d"{
				if !(i+2 >= len(S)) && string(S[i+1]) == "z"{
						if string(S[i+2]) == "="{
							C++
							i+=2
						}else {
							C++
						}
				}else if string(S[i+1]) == "-"{
					C++
					i+=1
				}else {
					C++
				}

			}else if string(S[i]) == "l"{
				if string(S[i+1]) == "j"{
					C++
					i+=1
				}else {
					C++
				}
			}else if string(S[i]) == "n"{
				if string(S[i+1]) == "j"{
					C++
					i+=1
				}else {
					C++
				}
			}else if string(S[i]) == "s"{
				if string(S[i+1]) == "="{
					C++
					i+=1
				}else {
					C++
				}
			}else if string(S[i]) == "z"{
				if string(S[i+1]) == "="{
					C++
					i+=1
				}else {
					C++
				}
			}else {
				C++
			}
		}else {
			C++
		}
	}
	fmt.Print(C)
}