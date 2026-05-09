class father {
    int x;
}
class child extends father{
    int x;

}
public class oo {

    public static void main(String[] args) {
        child cv = new child();
        cv.super.x = 10;
    }
}