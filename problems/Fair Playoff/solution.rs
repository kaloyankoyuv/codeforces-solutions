use std::io;
use std::cmp;

fn main() {
    let mut t = String::new();
    io::stdin()
        .read_line(&mut t)
        .expect("Failed");
    let mut t: i32 = t.trim().parse().expect("Failed");

    while t != 0 {
        let mut skills = String::new();
        io::stdin()
            .read_line(&mut skills)
            .expect("Failed");

        let mut skills_itr = skills.split_whitespace();
        let s1: i32 = skills_itr.next().unwrap().parse().expect("Failed");
        let s2: i32 = skills_itr.next().unwrap().parse().expect("Failed");
        let s3: i32 = skills_itr.next().unwrap().parse().expect("Failed");
        let s4: i32 = skills_itr.next().unwrap().parse().expect("Failed");

        let act_finalist1: i32 = cmp::max(s1, s2);
        let act_finalist2: i32 = cmp::max(s3, s4);

        let mut arr = [s1, s2, s3, s4];
        arr.sort();

        if (act_finalist1 == arr[2] || act_finalist1 == arr[3]) && (act_finalist2 == arr[2] || act_finalist2 == arr[3]) {
            println!("YES");
        } else {
            println!("NO");
        }

        t-=1;
    }
}