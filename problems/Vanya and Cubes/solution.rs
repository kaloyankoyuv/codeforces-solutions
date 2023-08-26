use std::io;

fn main() {
    let mut cubes = String::new();
    io::stdin()
        .read_line(&mut cubes)
        .expect("Failed");
    let mut cubes: i32 = cubes.trim().parse().expect("Failed");

    let mut levels: i32 = 0;

    while cubes > 0 {

        let mut itr = 0;
        let mut i = 0;
        while i <= levels {
            i+=1;
            itr+=i;
        }
        
        cubes-=itr;
        
        if cubes < 0 {
            break;
        }
        levels+=1;
    }

    println!("{}", levels);

}