use std::io;

fn main() {
    let mut t = String::new();
    io::stdin()
        .read_line(&mut t)
        .expect("Failed");
    let mut t: i32 = t.trim().parse().expect("Failed");

    while t != 0 {
        
        let mut hm = String::new();
        io::stdin()
            .read_line(&mut hm)
            .expect("Failed");
        let hm = hm.trim();

        let mut ws: usize = 0;
        for i in hm.chars() {
            if i == ' ' {
                break;
            }
            ws+=1;
        }

        let h: i32 = hm[0..ws].parse().expect("Failed");
        let m: i32 = hm[ws+1..hm.len()].parse().expect("Failed");

        println!("{}", (23-h)*60 + 60-m);
        t-=1;
    }
}