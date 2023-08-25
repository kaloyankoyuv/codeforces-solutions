use std::io;

fn main() {
    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");
    let input: &str = input.trim();

    let mut x: usize = 0;
    for i in input.chars() {
        if i == ' ' {
            break;
        }     
        x+=1;
    }

    let n: i32 = input[0..x].parse().expect("Failed");
    
    let mut i: i32 = 0;

    let mut result = String::from("#Black&White");

    while i<=n-1 {
        let mut colors = String::new();
        io::stdin()
            .read_line(&mut colors)
            .expect("Failed to read line");
        
        for i in colors.chars() {
            if i == 'C' || i == 'M' || i == 'Y' {
                result = String::from("#Color");
            }
        }
        i+=1;
    }
    
    println!("{}", result);
}