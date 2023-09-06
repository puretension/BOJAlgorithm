import Foundation

while true{
   let str = readLine()!
   if(str == ".") {break}
   var stack = Array<Character>()
   var check = true
   var answer: String
   
   for i in str{
       if i == "[" { stack.append(i) }
       else if i == "(" { stack.append(i) }
       else if i == "]" || i == ")" {
                   if stack.isEmpty { check = false; break }
                   if i == "]" && stack.removeLast() != "[" { check = false; break } //LIFO
                   else if i == ")" && stack.removeLast() != "(" { check = false; break }//LIFO
               }
   }
   if check == false || !stack.isEmpty {answer = "no"} // ]다음 [가 왓을때 OR ]만 오고 대응되는거 조차 안왓을때
   else { answer = "yes" }
   print(answer)
}


//10799
import Foundation
let str = readLine()!.map{String($0)}
var stack = 0
var answer = 0

//)는 2가지 의미를 지님 첫번째는 레이저 ()이고, 두번째는 막대의 끝을 의미
//레이저인 경우에는 지금까지 있던 (를 모두 answer에 더해주고, 막대의 끝인경우에는 두개로 쪼개지는 것을 뜻하므로 1만 더해줌

for i in 0..<str.count{
   if str[i] == "(" {stack += 1}
   else if str[i] == ")" {
       
       if(str[i-1] == "(") // ()로 레이저일 경우
       {
           stack -= 1 // (를 pop
           answer += stack //그이전에 잇던 ( 만큼 ++
           continue
       }
           //막대 끝인 경우
           stack -= 1 // (를 pop => 막대끝이 정해졋으므로 2개로 쪼개짐
           answer += 1 // 2개쪼개졋으니 1더함
   }
}
print(answer)




//14425
import Foundation

let input = readLine()!.split(separator: " ").map{ Int($0)! }
let N = input[0]
let M = input[1]

var cnt = 0
var check = [String: Int]()

for _ in 0..<N {
   let str = readLine()!
   check[str] = 1
}

for _ in 0..<M {
   let str = readLine()!
   if check.keys.contains(str) {
       cnt += 1
   }
}

print(cnt)
