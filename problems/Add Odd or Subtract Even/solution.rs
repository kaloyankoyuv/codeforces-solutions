use std::io;

fn main() {
    let mut t = String::new();
    io::stdin()
        .read_line(&mut t)
        .expect("Failed");
    let mut t: i32 = t.trim().parse().expect("Failed");

    while t != 0 {

        let mut ab = String::new();
        io::stdin()
            .read_line(&mut ab)
            .expect("Failed");
        let ab = ab.trim();

        let mut ws: usize = 0;
        for i in ab.chars() {
            if i == ' ' {
                break;
            }
            ws+=1;
        }
    
        let a: i32 = ab[0..ws].parse().expect("Failed");
        let b: i32 = ab[ws+1..ab.len()].parse().expect("Failed");

        let result: i32;
        if a == b {
            result = 0;
        } else if (a < b && (b - a)%2!=0) || (a>b && (a-b)%2==0) {
            result = 1;
        } else {
            result = 2;
        }

        println!("{}", result);

        t-=1;
    }
}
