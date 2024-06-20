IDENTIFICATION DIVISION.
PROGRAM-ID. StudentPaymentProgram.

ENVIRONMENT DIVISION.
INPUT-OUTPUT SECTION.
FILE-CONTROL.
    SELECT StudentMainFile ASSIGN TO 'HW2-Student-Main.csv'
        ORGANIZATION IS LINE SEQUENTIAL.
    SELECT FeesFile ASSIGN TO 'HW2-Fees.csv'
        ORGANIZATION IS LINE SEQUENTIAL.
    SELECT StudentPaymentFile ASSIGN TO 'HW2-Student-Payment.csv'
        ORGANIZATION IS LINE SEQUENTIAL.

DATA DIVISION.
FILE SECTION.
FD  StudentMainFile.
01  StudentMainRecord.
    05 StudentID PIC X(9).
    05 FILLER PIC X.
     05 PaymentType PIC X(1).
    05 FILLER PIC X.
    05 Studentname PIC X(10).
FD  FeesFile.
01  FeesRecord.
    05 PaymentType PIC X(1).
    05 FILLER PIC X.
    05 FILLER PIC X.
    05 Amount PIC 9(5).
    05 FILLER PIC X.

FD  StudentPaymentFile.
01  StudentPaymentRecord.
    05 StudentID-Payment PIC X(9).
       05 FILLER PIC X.
       05 FILLER PIC X.
    05 Amount-Payment PIC 9(5).
    05 FILLER PIC X.
WORKING-STORAGE SECTION.
01  CombinedDataRecord.
    05 CR-StudentID-Output PIC X(10).
    05 CR-StudentName-Output PIC X(7).
    05 CR-PaymentType-Output PIC X(1).
    05 CR-FeesAmount-Output PIC 9(5).
    05 CR-PaymentAmount-Output PIC 9(5).
    05 CR-Short PIC 9(5).
01 TotalReceived PIC 9(7) VALUE ZERO.
01 EOF1 PIC X(1) VALUE 'N'.
01 EOF2 PIC X(1) VALUE 'N'.
01 EOF3 PIC X(1) VALUE 'N'.
01 EOF4 PIC X(1) VALUE 'N'.
01 flag PIC X(1) VALUE 'N'.
PROCEDURE DIVISION.
    OPEN INPUT StudentMainFile
    READ StudentMainFile
       PERFORM UNTIL EOF1 = 'Y'
           READ StudentMainFile
               AT END MOVE 'Y' TO EOF1
               NOT AT END 
                           MOVE StudentID OF StudentMainRecord TO CR-StudentID-Output
                           MOVE PaymentType OF StudentMainRecord TO CR-PaymentType-Output
                           MOVE StudentName OF StudentMainRecord TO CR-StudentName-Output
                           MOVE 'N' TO EOF2
                           OPEN INPUT FeesFile
                           PERFORM UNTIL EOF2 = 'Y'
                               READ FeesFile
                                   AT END MOVE 'Y' TO EOF2
                                   NOT AT END 
      *>                             display "FeesFile PaymentType: " PaymentType OF FeesRecord
      *>                                display "CR-PaymentType-Output: " CR-PaymentType-Output
                                   IF PaymentType OF FeesRecord = CR-PaymentType-Output
      *>                             display "FeesFile Amount: " Amount OF FeesRecord
      *>                             display "CR-PaymentType-Output: " PaymentType OF FeesRecord
                                               MOVE Amount OF FeesRecord TO CR-FeesAmount-Output
                                               MOVE 'Y' TO EOF2
                                   END-IF
                                   END-READ
                           END-PERFORM
                           Close FeesFile
                            OPEN INPUT StudentPaymentFile
                           MOVE 'N' TO EOF3
                           MOVE 'N' TO flag
                          PERFORM UNTIL EOF3 = 'Y'
                              READ StudentPaymentFile
                                  AT END MOVE 'Y' TO EOF3
                                  NOT AT END 
      *>                            display "StudentPaymentFile StudentID-Payment: " StudentID-Payment OF StudentPaymentRecord
      *>                              display "Amount-Payment: " Amount-Payment OF StudentPaymentRecord
                                  IF StudentID-Payment OF StudentPaymentRecord = CR-StudentID-Output
                                              MOVE Amount-Payment OF StudentPaymentRecord TO CR-PaymentAmount-Output
                                              
      *>                                        display "@@@@CR-PaymentAmount-Output: " CR-PaymentAmount-Output
      *>                            display "StudentID-Payment: " StudentID-Payment OF StudentPaymentRecord

                                                MOVE 'Y' TO EOF3
                                                MOVE 'Y' TO flag
                                  END-IF
                              END-READ
                          END-PERFORM
                          IF flag = 'N'
                              MOVE 0 TO CR-PaymentAmount-Output
                            END-IF
                            Close StudentPaymentFile
                           add CR-PaymentAmount-Output to TotalReceived
                           Move 0 to CR-Short
                           IF CR-FeesAmount-Output > CR-PaymentAmount-Output
     *>                         DISPLAY "Student " CR-StudentName-Output " did not pay the required fees."
                               COMPUTE CR-Short = CR-PaymentAmount-Output - CR-FeesAmount-Output
      *>                        display  "Amount short: " CR-Short
                                display CR-StudentName-Output CR-short
                           END-IF
      *>                      display CR-StudentID-Output "@" CR-StudentName-Output "@" CR-PaymentType-Output "@" CR-FeesAmount-Output "@" CR-PaymentAmount-Output "@" CR-Short
      *>                     DISplay "\n"

           END-READ
       END-PERFORM
      

    DISPLAY "Total amount received from students: " TotalReceived

    CLOSE StudentMainFile

    STOP RUN.
