//
// Created by Maikol Guzman on 8/24/20.
//

#include <BankTransferSender.h>
#include <Person.h>
#include <CashSender.h>
#include <CheckSender.h>
#include "gtest/gtest.h"

TEST(PersonTestSuite, VerifyProcessPayment){
    Person person;

    EXPECT_EQ(person.processPaymentBankTransfer(), "Sending the money by transference");
    EXPECT_EQ(person.processPaymentCash(), "Give the money in the hands");
    EXPECT_EQ(person.processPaymentCheck(), "Sending the check with the money");
}
