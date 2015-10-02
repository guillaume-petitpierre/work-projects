/**
 * Created by guillaume on 10/2/15.
 */
public class TestClass {
    public class Truc{
        public Truc(){

        }

        @Override
        public String toString(){
            return "Truc";
        }
    }

    public void test(){
        Truc t = new Truc();
        System.out.println(t);
    }

    public static void main(String[] args){
        TestClass tc = new TestClass();
        tc.test();
    }
}
