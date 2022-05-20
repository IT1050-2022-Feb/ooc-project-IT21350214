#include <iostream>
#include "Report.h"

using namespace std;

int main()
{
  //Method Calling
   //--------Methods Calling--------
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
  
  return 0;
}
