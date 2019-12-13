package data_structure;

class LinkedList {
    Node head;
    Node tail;
    int size = 0;

    class Node {
        private String data;
        private Node next;

        Node(String input) {
            this.data = input;
            this.next = null;
        }
    }

    // 순회 노드
    Node getNode(int index) {
        Node temp = head;
        for (int i = 0; i < index; i++) {
            temp = temp.next;
        }
        return temp;
    }

    public void addFirstNode(String input) {
        Node newNode = new Node(input);

        newNode.next = head;
        size++;

        if (head.next == null) {
            tail = head;
        }
    }

    public void addTailNode(String input) {
        ifListIsEmptyAddFirst(input);

        Node nextNode = new Node(input);
        tail.next = nextNode;
        tail = tail.next;
        size++;
    }

    public void add(int k, String input) {
        ifListIsEmptyAddFirst(input);

        Node newNode = new Node(input);
        Node firstNode = getNode(k - 1);
        Node secondNode = firstNode.next;

        firstNode.next = newNode;
        newNode.next = secondNode;
        size++;

        if (newNode.next == null) {
            tail = newNode;
        }
    }

    private void ifListIsEmptyAddFirst(String input) {
        if (size == 0) addFirstNode(input);
    }

    @Override
    public String toString() {
        if (head == null) {
            return "[]";
        }

        Node temp = head;
        String str = "[";

        while (temp.next != null) {
            str += temp.data + ",";
            temp = temp.next;
        }

        str += temp.data;
        return str + "]";
    }

}

class LinkedListTest {
    public static void main(String[] args) {
        LinkedList linkedList = new LinkedList();

        linkedList.addTailNode("10");
        linkedList.addTailNode("20");
        linkedList.addTailNode("30");

        linkedList.toString();
    }
}
