//use std::io::Write;
use std::io;

fn main() {

    let mut t = String::new();
    io::stdin().read_line(&mut t).expect("Failed");

    let mut t: i32 = t.trim().parse().expect("Failed");

    while t!=0 {

	let mut k = String::new();
	io::stdin().read_line(&mut k).expect("Failed");

	let mut k: i32 = k.trim().parse().expect("Failed");

	let mut i: i32 = 0;

	loop {
	    i+=1;
	    if i%3==0 || i%10==3 {
		continue;
	    }

	    k-=1;
	    if k==0 {
		println!("{}", i);
		break;
	    }
	}

	t-=1;
    }
}