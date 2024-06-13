# Load necessary library
library(readr)
library(dplyr)
# Load the data
student_main <- read.csv("HW2-PL/HW2-Student-Main.csv", stringsAsFactors = FALSE, fileEncoding = "UTF-8-BOM")
fees <- read.csv("HW2-PL/HW2-Fees.csv", stringsAsFactors = FALSE, fileEncoding = "UTF-8-BOM")
student_payment <- read.csv("HW2-PL/HW2-Student-Payment.csv", stringsAsFactors = FALSE, fileEncoding = "UTF-8-BOM")

# Remove commas and convert the Amount column to numeric
student_payment$Amount <- as.numeric(gsub(",", "", student_payment$Amount))
fees$Amount <- as.numeric(gsub(",", "", fees$Amount))

# Computation #1: Total amount received from students before due
total_received <- sum(student_payment$Amount)

# print(colnames(student_main))
# print(colnames(fees))
# print(colnames(student_payment))
# Computation #2: List all the students that did not pay the required fees with the amount short
# Merge the tables
student_fees <- merge(student_main, fees, by = "Payment.Type", all.x = TRUE)
student_info <- merge(student_fees, student_payment, by = "Student.ID", all.x = TRUE)


# Calculate the amount short
student_info$Amount.x <- as.numeric(gsub(",", "", student_info$Amount.x))
student_info$Amount.y <- as.numeric(gsub(",", "", student_info$Amount.y))
student_info$Amount.y [is.na(student_info$Amount.y)] <- 0
student_info$Short <- with(student_info, Amount.x - Amount.y)
# print(student_info)
# Filter the students who did not pay the required fees
students_short <- subset(student_info, Short > 0)
students_short <- select(students_short, Name, Short)
# Print the results
print(paste("Total amount received from students before due: ", total_received))
print("Students that did not pay the required fees with the amount short:")
print(students_short)