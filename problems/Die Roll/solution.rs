use std::io;

fn main() {
    let mut yw = String::new();
    io::stdin()
        .read_line(&mut yw)
        .expect("Failed");
    let mut itr = yw.split_whitespace();

    let y: u8 = itr.next().unwrap().parse().expect("Failed");
    let w: u8 = itr.next().unwrap().parse().expect("Failed");

    let mut npos: u8 = 0;

    if y > w {
        npos = 6-(y-1);
    } else if y < w {
        npos = 6-(w-1);
    } else if y == w {
        npos = 6-(y-1);
    }
    
    if npos == 1 {
        println!("1/6");
    } else if npos == 2 {
        println!("1/3");
    } else if npos == 3 {
        println!("1/2");
    } else if npos == 4 {
        println!("2/3");
    } else if npos == 5 {
        println!("5/6");
    } else if npos == 6 {
        println!("1/1");
    }
}
 