getithBit=(num, i)=>{
    bitMask = (1 << i);
    if(!(num & bitMask)) {
        return 0;
    }
    else{
        return 1;
    }
}
function setithBit(num, i) {
    bitMask = (1 << i)
    return (num | bitMask)
}
clearithBit=(num, i)=>{
    bitMask = ~(1<<i);
    return (num & bitMask);
}
console.log(clearithBit(6, 2)); //1
