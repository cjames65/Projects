package myProjects;

import java.net.InetAddress;
import java.net.UnknownHostException; 

public class Nslookup {

	//main method
			public static void main(String[] args) {
			
		final int REQUIREDPARAMETERS = 5;
		
		//local variable is created for while loop used
		int i = 0;
		
		if (args.length != REQUIREDPARAMETERS) {
		    System.err.println("Supply the domain names");
		}
		
		//Methods calls are here. While loop is used to loop through the array or arguments we provided
			mylookup();
			
			while(i < args.length) {
			lookup(args[i]);
			i++;
			}
			
		//Another method call
			fixedLookup();
		
		//Ends program
		    System.exit(-1);
		}
			
		//Method used to find the name, IP addresses and qualified domain names
			public static void lookup(String domainName) {
				
			// using InetAddress satisfy requirements
			try {
				InetAddress ip1 = InetAddress.getByName(domainName);
				InetAddress[] all = InetAddress.getAllByName(domainName);
				System.out.println("Host Name: "+ip1.getHostName());
				System.out.println("IP Address: "+ip1.getHostAddress()); 
				System.out.println("All associated IP Address: ");
				
		//Since the getAllByName method from the INet class creates an array of IP addresses, a for loop is used to iterate through the addresses 
		//and print them out.
				for (int i = 0; i < all.length-1; i++) {
					System.out.println(all[i]);
				}
				
				System.out.println("Fully Qualified domain name: "+ip1.getCanonicalHostName());
				
			}catch(Exception e){System.out.println(e);} 
		}
		
		//This method is used to find the addresses and name of the host machine
			public static void mylookup() {
				try {
				InetAddress me = InetAddress.getLocalHost();
				System.out.println("My host address is: "+me);
				System.out.println("IP Address: "+me.getHostAddress()); 
				System.out.println("Fully Qualified domain name: "+me.getCanonicalHostName());
			}catch (UnknownHostException e) {  
		      }
		}
			
		//This Method is used to find the names of the given addresses. 
			public static void fixedLookup() {
			//Since the getByAddress method's parameter is a byteArray we create two of them to pass them in. 
				byte[] a = new byte[] { 127, 0, 0, 1 };
				byte[] b = new byte[] { 8, 8, 8, 8 };
				
				try {
					InetAddress name1 = InetAddress.getByAddress(a);
					InetAddress name2 = InetAddress.getByAddress(b);
					
					System.out.println("The host name of "+name1+" is: "+name1.getHostName());
					System.out.println("The host name of "+name2+" is: "+name2.getHostName());
			}catch (UnknownHostException e) {  
		      }
			
			
		}
		}
		

