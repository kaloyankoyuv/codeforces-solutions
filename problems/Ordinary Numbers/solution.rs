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
        let n: i128 = n.trim().parse().expect("Failed");

        let mut res = 0;
        let mut pw: i128 = 1;
        while pw <= n {
            
            let mut d = 1;
            while d <= 9 {
                if pw * d <= n {
                    res+=1;
                }
                d+=1;
            }

            pw = pw * 10 + 1;
        }
        println!("{}", res);

        t-=1;
    }
}