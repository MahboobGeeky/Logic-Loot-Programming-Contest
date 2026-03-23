# Editorial: Midnight Coffee with Mahboob

## Problem Understanding

Mahboob drinks **N** cups of coffee, each giving **E** energy units.
He wants to create **P** problems, each costing **C** energy units.

We need to check if his total energy is enough to cover the total energy required.

## Key Observation

- Total energy gained = `N * E`
- Total energy required = `P * C`

If `N * E >= P * C` → Print `YES`
Otherwise → Print `NO`

## Approach

1. Read four integers: `N`, `E`, `P`, `C`.
2. Compute `total_energy = N * E`.
3. Compute `total_required = P * C`.
4. Compare and print `YES` or `NO`.

## Complexity Analysis

| Type | Complexity |
|------|------------|
| Time Complexity | O(1) — just arithmetic and a comparison |
| Space Complexity | O(1) — no extra memory used |

## Edge Cases

| N | E | P | C | N*E | P*C | Output |
|---|---|---|---|-----|-----|--------|
| 1 | 1 | 1 | 1 | 1 | 1 | YES |
| 1 | 5 | 2 | 5 | 5 | 10 | NO |
| 5 | 6 | 2 | 10 | 30 | 20 | YES |
| 10⁶ | 10⁶ | 10⁶ | 10⁶ | 10¹² | 10¹² | YES |

## Important Note on Overflow

Since N, E, P, C can each be up to **10⁶**, the products `N*E` and `P*C` can reach up to **10¹²**, which exceeds the range of a 32-bit integer (~2.1 × 10⁹). Always use **`long long`** in C++ to avoid overflow.

## Conclusion

A simple arithmetic comparison problem. The only catch is using `long long` to handle large values safely.