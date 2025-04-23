# Problem Kya Hai?

Humain ek array diya gaya hai, jaisay: `[1, 2, -3, 4, -6, 0, 6]`
Humain is mein se **lagatar kuch numbers ka multiply (product)** nikalna hai jo sab se bada ho.

### Example:
```
[1, 2] → 1 × 2 = 2
[2, -3, 4] → 2 × (-3) × 4 = -24
[4, -6] → 4 × (-6) = -24
[2, -3, 4, -6] → 2 × (-3) × 4 × (-6) = 144 (Ye sab se bada hai!)
```
Toh humara answer **144** aayega.

---

# Code Kaise Kaam Karta Hai? (Step-by-Step)

## Concept:
Har number pe hum 3 cheezain track karte hain:
- `maxTillNow` → Abhi tak ka maximum product (Agar current number ko include karein)
- `minTillNow` → Abhi tak ka minimum product (Kyunki negative × negative = positive ho sakta hai!)
- `ans` → Overall maximum product jo humein chahiye.

---

## Step 1: Initialization (Shuruwat)
```cpp
int maxTillNow = nums[0];  // Pehla number hi abhi tak ka max hai
int minTillNow = nums[0];  // Pehla number hi abhi tak ka min hai
int ans = maxTillNow;      // Final answer abhi pehla number hai
```

---

## Step 2: Loop Chalana (Har Number Pe Kaam Karna)
```cpp
for (int i = 1; i < n; i++) {
    int curr = nums[i];  // Current number

    int tempMaxTillNow = max(curr, max(maxTillNow * curr, minTillNow * curr));
    minTillNow = min(curr, min(maxTillNow * curr, minTillNow * curr));

    maxTillNow = tempMaxTillNow;  // Max ko update karo
    ans = max(ans, maxTillNow);   // Overall answer ko update karo
}
```

---

# Example Dry Run (Array = `[1, 2, -3, 4, -6, 0, 6]`)

| Step         | Number | maxTillNow                        | minTillNow                        | ans (Final Max) |
|--------------|--------|----------------------------------|----------------------------------|-----------------|
| 0 (Start)    | 1      | 1                                | 1                                | 1               |
| 1            | 2      | max(2, 1×2, 1×2) = 2              | min(2, 1×2, 1×2) = 2              | max(1, 2) = 2    |
| 2            | -3     | max(-3, 2×-3, 2×-3) = -3          | min(-3, -6, -6) = -6              | max(2, -3) = 2   |
| 3            | 4      | max(4, -3×4, -6×4) = 4            | min(4, -12, -24) = -24            | max(2, 4) = 4    |
| 4            | -6     | max(-6, 4×-6, -24×-6) = 144       | min(-6, -24, 144) = -24           | max(4, 144) = 144|
| 5            | 0      | max(0, 144×0, -24×0) = 0          | min(0, 0, 0) = 0                  | max(144, 0) = 144|
| 6            | 6      | max(6, 0×6, 0×6) = 6              | min(6, 0, 0) = 0                  | max(144, 6) = 144|

**Final Answer = 144** (Subarray `[2, -3, 4, -6]` se aaya hai)

---

# Kyun Yeh Code Important Hai?

### ✅ Negative Numbers Handle Karta Hai:
Agar `-3 × -6 = 18` (Positive) ho jata hai, isliye `minTillNow` track karna zaroori hai.

### ✅ Zero Bhi Sahi Se Kaam Karta Hai:
Agar `0` aata hai, toh naya subarray shuru hota hai.

### ✅ Efficient Hai:
Har step mein sirf 3 comparisons hoti hain, isliye fast hai.

---

