use std::io;

fn main() {
    let mut t = String::new();
    io::stdin()
        .read_line(&mut t)
        .expect("Failed");
    let mut t: i32 = t.trim().parse().expect("Failed");

    while t != 0 {
        let mut n = String::new();
        io::stdin()
            .read_line(&mut n)
            .expect("Failed");
        let n: i32 = n.trim().parse().expect("Failed");

        if n%4 == 0 {
            println!("YES");
        } else {
            println!("NO");
        }

        t-=1;
    }
}