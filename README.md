# Choosing Right Triangle

A simple C program that demonstrates 4 different right-triangle star patterns, 
then lets the user choose one and customize its size.

## How it works

1. The program first **previews all 4 triangle patterns** at a fixed size, so the user can see what each option looks like.
2. The user then **selects a pattern** (1–4) from a menu.
3. The user enters **how many stars** should make up each line of the triangle (`n`).
4. The chosen pattern is printed at the custom size.

## The 4 patterns

| Option | Description |
|--------|-------------|
| 1 | Upright triangle (grows top to bottom) |
| 2 | Inverted triangle (shrinks top to bottom) |
| 3 | Right-aligned upright triangle |
| 4 | Right-aligned inverted triangle |

## How to compile and run

```bash
gcc Triangles.c -o Triangles
./Triangles
```

## Example

```
Choose Your Scale: 1
put the number of the stars: 4
 *
 * *
 * * *
 * * * *
Amazing Right Triangle :)
```
