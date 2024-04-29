import re

text = "Hello, my email is example@email.com and my phone number is 123-456-7890."
emails = re.findall(r'[\w\.-]+@[\w\.-]+', text)
phone_numbers = re.findall(r'\d{3}-\d{3}-\d{4}', text)

print("Emails:", emails)
print("Phone Numbers:", phone_numbers)
