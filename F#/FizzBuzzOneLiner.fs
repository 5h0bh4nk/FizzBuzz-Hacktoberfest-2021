# @sriyasync
# Sriya Rani Behera
# Hactoberfest 2021
[1..100] |> List.map (fun x-> match(x%3, x%5)with|0,0->"FizzBuzz"|0,_->"Fizz"|_,0->"Buzz"|_->x|>string) |> Seq.iter ( printfn "%s" )