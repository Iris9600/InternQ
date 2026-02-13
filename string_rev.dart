String reverse_string(String input){
    String reverse_String = "";

    for (int i = input.length - 1; i >= 0; i-- ){
      reverse_String += input[i];
    }

    return reverse_String;
}

void main(){
  print(reverse_string("hello"));
}