// for this problem I choose Java, so first I took the input using scanner. To find the max and min, I just kept on comparing 
// the second element and assiging it to be maximum or minimu, and to find the mean I kept on adding the 2nd elements and kept on adding it
// and then just finding the ratio of the sum to the count. Also, found out the standard deviation using it's formula. And finally just 
// Printed all of the results.

import java.io.File;  
import java.io.FileNotFoundException;  
import java.util.*; 

public class Main 
{
        public static void main(String[] args) 
        {
                //try catch block to handle exceptions 
                try 
                {
                        
                        //create Scanner Object
                        Scanner myReader = new Scanner(System.in);
                        //read 1st line, we want to skip this because it contain field name 
                        myReader.nextLine();
                        //varibles
                        double value,sum=0,count=0,min=999999999,max=0;
                        //ArrayList to store values for finding std
                        ArrayList <Double> al=new ArrayList <Double>();
                        //read from file until line is present
                        while (myReader.hasNextLine()) 
                        {
                                // read line and store in data
                                String data = myReader.nextLine();
                                //split string by ,
                                String arr[]=data.split(",");
                                //value is 2nd element of array according to input given in question
                                value=Double.parseDouble(arr[1]);
                                //add value to ArrayList
                                al.add(value);
                                //add value to sum
                                sum+=value;
                                //increment count
                                count++;
                                //calculate max
                                if(value>max)
                                {
                                        max=value;
                                }
                                //calculate min
                                else if(value<min)
                                {
                                        min=value;
                                }
                        }
                        //calculate mean
                        double mean=sum/count;
                        double std=0.0;
                        //loop through all values
                        for(double values:al)
                        {
                                //calculate std
                                std+=(Math.pow((values-mean),2));  
                        }       
                        //calculate sample std, please be sure that n>1
                        std/=(count-1);
                        //print values
                        System.out.println("Min: "+min);
                        System.out.println("Max: "+max);
                        System.out.println("Mean: "+mean);
                        System.out.println("Std: "+std);
                } 
                catch (ArithmeticException Ae)
                {
                        System.out.println("Count should be greater than 1 for std");
                }
        }
}