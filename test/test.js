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
// console.log(clearithBit(6, 2)); //1
class Student {
    id;
    name;
    constructor(id, name) {
        this.id = id;
        this.name = name;
    }
    getname=()=>{
        return this.name;
    }
    setname=(name)=>{
        this.name = name;
    }
    getid() {
        return this.id;
    }
    setid(id) {
        this.id = id;
    }
    greet() {
        console.log(`Hi, I am ${this.name} main ap ko salam paish karta hu `);
    }
};
s1 = new Student(11, 'Ahmad');
console.log(s1.id);
s1.setid(12);
s1.setname("kamal")
console.log(s1.getname());
s1.greet();


