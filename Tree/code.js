class Node {
    constructor(data) {
        this.data = data;
        this.left = null;
        this.right = null;
    }
}

class Tree {
    constructor() {
        this.root = null;
        this.idx = -1;
    }

    buildTreeHelper(nodes) {
        this.idx++;
        if (nodes[this.idx] === -1) {
            return null;
        }

        const newNode = new Node(nodes[this.idx]);
        newNode.left = this.buildTreeHelper(nodes);
        newNode.right = this.buildTreeHelper(nodes);
        return newNode;
    }

    buildTree(nodes) {
        this.idx = -1; // Reset before building
        this.root = this.buildTreeHelper(nodes);
    }

    getRoot() {
        return this.root;
    }

    preorder(node) {
        if (node === null) return;
        process.stdout.write(node.data + " ");
        this.preorder(node.left);
        this.preorder(node.right);
    }

    inorder(node) {
        if (node === null) return;
        this.inorder(node.left);
        process.stdout.write(node.data + " ");
        this.inorder(node.right);
    }

    postorder(node) {
        if (node === null) return;
        this.postorder(node.left);
        this.postorder(node.right);
        process.stdout.write(node.data + " ");
    }

    levelorder(root) {
        if (root === null) return;
        let queue = [root, null];
        while (queue.length > 0) {
            let curr = queue.shift();
            if (curr === null) {
                console.log();
                if (queue.length === 0) break;
                queue.push(null);
            } else {
                process.stdout.write(curr.data + " ");
                if (curr.left) queue.push(curr.left);
                if (curr.right) queue.push(curr.right);
            }
        }
    }

    height(node) {
        if (node === null) return 0;
        return Math.max(this.height(node.left), this.height(node.right)) + 1;
    }

    countNode(node) {
        if (node === null) return 0;
        return this.countNode(node.left) + this.countNode(node.right) + 1;
    }

    sum(node) {
        if (node === null) return 0;
        return this.sum(node.left) + this.sum(node.right) + node.data;
    }
}

// -------------------- Simulating main ------------------------

const nodes = [1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1];

const tree = new Tree();
tree.buildTree(nodes);

const root = tree.getRoot();

console.log("Level Order Traversal:");
tree.levelorder(root);

console.log("Preorder:");
tree.preorder(root);
console.log("\nInorder:");
tree.inorder(root);
console.log("\nPostorder:");
tree.postorder(root);

console.log("\nSum:", tree.sum(root));
console.log("Total Nodes:", tree.countNode(root));
console.log("Height:", tree.height(root));
