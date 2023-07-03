#[allow(dead_code)]
#[path = "../ex00/ft_putchar.rs"]
mod ft_putchar;

pub fn ft_print_alphabet() {
    for c in 'a'..='z' {
        print!("{}", c);
    }
}

fn main() {
    ft_print_alphabet();
    ft_putchar::ft_putchar('\n');
}
