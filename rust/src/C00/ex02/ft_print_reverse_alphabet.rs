#[allow(dead_code)]
#[path = "../ex00/ft_putchar.rs"]
mod ft_putchar;
fn ft_print_reverse_alphabet() {
    for c in ('a' as u8..='z' as u8).rev() {
        print!("{}", c as char);
    }
}

fn main() {
    ft_print_reverse_alphabet();
    ft_putchar::ft_putchar('\n');
}
