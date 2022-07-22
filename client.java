package edu.monmouth.project3;

import java.io.*;
import java.net.*;

public class client {

	public static void main(String[] args) {
		int portNum = 3000;
		
		//Creates an Inet variable to call an Inet class that finds the IP Address of the client
		InetAddress local = getMyAddress();
		
		//calls the createClient class with the client's IP address and the port number 
		createClient(local, portNum);

	}

	
	//class to find the current IP address of the client
	public static InetAddress getMyAddress() {
		try {
		InetAddress me = InetAddress.getLocalHost();
		return me;
		
	}catch (UnknownHostException e) {  
      }
		return null;
}
	
	//Creates a client with an Inet address and port integer as parameters
	public static void createClient(InetAddress address, int port) {
		
		try {
			//a socket is made using the parameters passed in
			//can change address to string containing ip address to connect to someone's server 
			Socket s = new Socket(address, port);
			
			//returns an input stream for the socket 
			InputStream is = s.getInputStream();
			
			//reads text from a character-input stream, buffering characters to provide efficient reading of characters, arrays, and lines.
			BufferedReader br = new BufferedReader(new InputStreamReader(is));
			
			//closes the connection
			s.close();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

	
	public static OutputStream getOutputStream() throws NullPointerException {
		System.out.println("Client: Hello, we are connected. Nice to meet you!");
		System.out.println("Client: Goodbye!");
		return null;
}
}
