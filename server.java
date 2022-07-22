package edu.monmouth.project3;

import java.io.*;
import java.net.*;



public class server {
	static int portNum = 3000;

	public static void main(String[] args) {
		
		//Calls the createServer class passing in the port number
		createServer(portNum);

	}
	
	//The createServer class with a port integer as the parameter
	public static void createServer(int port) {
		
		try {
			//Creates a server socket with the port number. 
			ServerSocket s = new ServerSocket(portNum);
			
			//Lets the user know the  server is awaiting a connection
			System.out.println("Server: waiting. . . . .");
			
			//Accepts the connection and finds the IP address of the socket connected to the port
			Socket serv = s.accept();
			serv.getRemoteSocketAddress();
			
			//Shows that a connection has been made
			System.out.println("Server: You are now connected. Pleased to meet you " + serv.getRemoteSocketAddress());
			
			OutputStream os = client.getOutputStream();
			PrintWriter writer = new PrintWriter(os, true);
			
			//closes connection
			serv.close();
		} catch (Exception e){System.out.println(e);}
		
	}


}
