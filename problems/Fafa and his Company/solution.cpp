use std::io;

fn main() {
    let mut n = String::new();
    io::stdin()
        .read_line(&mut n)
        .expect("Failed");
    let n: i32 = n.trim().parse().expect("Failed");

    let mut i: i32 = 1;
    let mut ans: i32 =0;
    while i <= n-1 {

        if (n-i)%i == 0 {
            ans+=1;
        }

        i+=1;
    }

    println!("{}", ans);
}
