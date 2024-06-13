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
FD StudentMainFile.
01 StudentMainRecord.
    05 StudentID PIC X(10).
    05 PaymentType PIC X(10).
FD FeesFile.
01 FeesRecord.
    05 PaymentType PIC X(10).
    05 Amount PIC 9(5)V99.
FD StudentPaymentFile.
01 StudentPaymentRecord.
    05 StudentID PIC X(10).
    05 Amount PIC 9(5)V99.

PROCEDURE DIVISION.
    OPEN INPUT StudentMainFile
    OPEN INPUT FeesFile
    OPEN INPUT StudentPaymentFile
    READ StudentMainFile
        AT END DISPLAY "End of Student Main file."
    END-READ
    READ FeesFile
        AT END DISPLAY "End of Fees file."
    END-READ
    READ StudentPaymentFile
        AT END DISPLAY "End of Student Payment file."
    END-READ
    CLOSE StudentMainFile
    CLOSE FeesFile
    CLOSE StudentPaymentFile
    STOP RUN.