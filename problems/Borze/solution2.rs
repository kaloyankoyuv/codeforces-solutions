use std::io;

fn main() {

    let mut s = String::new();
    io::stdin()
        .read_line(&mut s)
        .expect("Failed to read line!");

    let s = s.trim();

    let mut i: usize = 0;

    while i <= s.len()-1 {

        if &s[i..i+1] == "." {
            print!("{}", 0);
        } else if &s[i..i+1] == "-" && &s[i+1..i+2] == "." {
            print!("{}", 1);
            i+=1;
        } else if &s[i..i+1] == "-" && &s[i+1..i+2] == "-" {
            print!("{}", 2);
            i+=1;
        }
        
        i+=1;
    }
}