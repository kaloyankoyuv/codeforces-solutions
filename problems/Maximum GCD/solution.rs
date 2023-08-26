use std::io;

fn main() {

    let mut t = String::new();
    io::stdin().read_line(&mut t).expect("Failed");
    let mut t: i8 = t.trim().parse().expect("Failed");

    while t!=0 {
	let mut n = String::new();
	io::stdin().read_line(&mut n).expect("Failed");
	let n: i32 = n.trim().parse().expect("Failed");

	println!("{}", n/2);
	
	t-=1;
    }
}