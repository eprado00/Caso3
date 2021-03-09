extern crate rand;
extern crate time;

use rand::Rng;
use std::time::Instant;

const ARRSIZE:usize = 519250;      //no agregar 0's ya que tarda demasiado creando array

fn linear_search(p_array: &mut Vec<i32>, p_size: usize, p_num:i32){
    for index in 0..p_size-1{
        if p_array[index] == p_num {
            println!("El numero {0} se encuentra en la posicion {1}", p_num, index);
            return;
        }
    }
    println!("El numero {} no se encuentra en la lista", p_num);
}

fn main() {
    let mut rng = rand::thread_rng();
    let n = ARRSIZE;

    let mut array:Vec<i32> = Vec::new();

    for index in 1..n{
        array.push(rng.gen_range(100..1000)); //Agrega numero random al array
    }

    //Creacion de la primera instancia de tiempo
    let inicio = Instant::now();

    linear_search(&mut array, ARRSIZE, 45); //busca a p_num dentro del array

    //Creacion de la segunda instancia de tiempo
    let fin = Instant::now();

    println!("{:?}", fin.duration_since(inicio))

}