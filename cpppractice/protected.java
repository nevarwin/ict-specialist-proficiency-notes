public class base {
    public function base() {
        System.out.println("Base Constructor");
    }
}

public class derived extends base {
    public function base() {
        System.out.println("Derived Constructor");
    }
}

public class printing {
    public function printing( base) {
        base obj = new base();
        System.out.println("Base object created");
    }
}

public class protectedClass {
    protected int x,y;
}

public class Main {
    public static void main(String[] args) {
        protectedClass obj = new protectedClass();
        System.out.println("x = " + obj.x + ", y = " + obj.y);
    }
}