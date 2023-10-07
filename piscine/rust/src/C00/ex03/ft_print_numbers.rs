#[allow(dead_code)]
#[path = "../ex00/ft_putchar.rs"]
mod ft_putchar;

fn ft_print_numbers() {
    for c in '0'..='9' {
        print!("{}", c);
    }
}

fn main() {
    ft_print_numbers();
    ft_putchar::ft_putchar('\n');
}
