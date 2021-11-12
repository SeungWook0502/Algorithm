package main
import "fmt"
func main(){
	Arpa := make([]int,26)
	for i:=0;i<26;i++{ Arpa[i] = -1 }
	var S string

	fmt.Scan(&S)
	apByte := []byte(S)
	for i,e := range apByte{
		if Arpa[e-97] == -1{
			Arpa[e-97] = i
		}
	} 
	for _,e := range Arpa{
		fmt.Print(e," ")
	}
}