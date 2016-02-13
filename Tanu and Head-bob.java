/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
 
 
import java.util.Scanner;
 
/**
 *
 * @author Vijay
 */
public class Main {
 
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
       
        Scanner sc = new Scanner(System.in);
        
        int T = sc.nextInt();
        
        for(int i=0;i<T;i++)
        {
           int N = sc.nextInt();
           
           String s;
           
           s=sc.next();
           
           int ncount=0,ycount=0,icount=0;
           
           for(int j=0;j<N;j++)
           {
             if(s.charAt(j)=='N')
                 ncount++;
             
             else 
                 if(s.charAt(j)=='Y')
                 ycount++;
             
             else
                 if(s.charAt(j)=='I')
                 icount++;
             
           
           
           }        
           
           
           if(icount>0)
               System.out.println("INDIAN");
           
           else
               if(icount==0 && ycount==0)
                   System.out.println("NOT SURE");
           
               else 
                   System.out.println("NOT INDIAN");
           
           
           
           
        
        }
        
        
    }
}
 
