#include <iostream>
#include "Report.h"
#include "GuestUser.h"
#include "RegisteredUser.h"
#include "Payment.h"
#include "Booking.h"
#include "Ticket.h"
#include "Bus.h"
#include "Driver.h"
#includde "BusSchedule.h"
#include "Feedback.h"

using namespace std;

int main()
{ 
  // Creating Dynamic Objects
  
  GuestUser *gu1;
  gu1 = new GuestUser(); // Dynamic Object for GuestUser
  
  RegisteredUser *ru1;
  ru1 = new RegisteredUser(); // Dynamic Object for RegisteredUser
  
  Booking * b1;
  b1 = new Booking(); // Dynamic Object for Booking
  
  Payment = p1;
  p1 = new Payment(); // Dynamic Object for Payment
  
  BusSchedule = bs1;
  bs1 = new BusSchedule(); // Dynamic Object for BusSchedule
  
  Bus = bus1;
  bus1 = new Bus(); // Dynamic Object for Bus
  
  Driver = d1;
  d1 = new Driver(); // Dynamic Object for Driver
  
  Ticket = t1;
  t1 = new Ticket(); // Dynamic Object for Ticket
  
  Feedback = f1;
  f1 = new Feedback(); // Dynamic Object for Feedback
  
  Report = r1;
  r1 = new Report(); // Dynamic Object for Report
  
   //Method Calling
  
  gu1-> displayUserDetails();
  gu1-> checkBusSchedule();
  
  ru1-> login();
  ru1-> displayDetails();
  ru1-> logout();
  
  d1-> displayDriverDetails();
  d1-> displayBusSchedule();
  d1-> checkBusRoutes();
  
  bus1-> displayBusDetails();
  
  b1-> displayBooking();
  
  p1-> displayPaymentDetails();
  
  t1-> displayTicketDetails();
  
  bs1-> displayBusSchedule();
  
  f1-> displayFeedback();
  
  r1-> bookingDetailsReport();
  r1-> ticketDetailsReport();
  r1-> paymentDetails();
  
  //deallocate Memory (Release Memory)
  
  delete gu1;
  delete ru1;
  delete b1;
  delete p1;
  delete bs1;
  delete bus1;
  delete d1;
  delete t1;
  delete f1; 
  delete r1;
  
  return 0;
}
