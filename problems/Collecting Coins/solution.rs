use std::io;

fn main() {
    let mut t = String::new();
    io::stdin()
        .read_line(&mut t)
        .expect("Failed");
    let mut t: i32 = t.trim().parse().expect("Failed");

    while t != 0 {
        let mut abcn = String::new();        
        io::stdin()
            .read_line(&mut abcn)
            .expect("Failed");

        let mut itr = abcn.split_whitespace();

        let mut v = Vec::new();

        let mut i: usize = 0;
        while i <=2 {
            let x: i32 = itr.next().unwrap().parse().expect("Failed");
            v.push(x);
            i+=1;
        }

        let n: i32 = itr.next().unwrap().parse().expect("Failed");

        v.sort();

        let mut ans = String::new(); 

        if n < (2*v[2] - v[1] - v[0]) {
            ans = String::from("NO");
        } else if (n - (2*v[2] - v[1] - v[0])) % 3 == 0 {
            ans = String::from("YES");
        } else if (n - (2*v[2] - v[1] - v[0])) % 3 != 0 {
            ans = String::from("NO");
        }

        println!("{}", ans);

        t-=1;
    }
}