-- Keep a log of any SQL queries you execute as you solve the mystery.

-- Interviews of 3 witnesses
SELECT *
FROM interviews
WHERE year = 2024
  AND month = 7
  AND day = 28;

-- Reports of crime at 10:15 a.m.
SELECT *
FROM crime_scene_reports
WHERE year = 2024
  AND month = 7
  AND day = 28
  AND street = 'Humphrey Street';

-- Thief license plate
SELECT license_plate
FROM bakery_security_logs
WHERE year = 2024
  AND month = 7
  AND day = 28
  AND hour = 10
  AND minute BETWEEN 15 AND 25
  AND activity = 'exit';

-- ATM transaction withdrawn on Leggett Street
SELECT *
FROM atm_transactions
WHERE year = 2024
  AND month = 7
  AND day = 28
  AND atm_location = 'Leggett Street'
  AND transaction_type = 'withdraw';

-- Phone call after the crime
SELECT *
FROM phone_calls
WHERE year = 2024
  AND month = 7
  AND day = 28
  AND duration < 60;

-- Find passengers on possible flights
SELECT *
FROM flights
JOIN airports ON airports.id = flights.origin_airport_id
JOIN passengers ON passengers.flight_id = flights.id
WHERE flights.year = 2024
  AND flights.month = 7
  AND flights.day = 29
  AND airports.city = 'Fiftyville'
  ORDER BY hour

-- Find the thief
SELECT
    people.name AS thief,
    destination_airport.city AS destination,
    accomplice.name AS accomplice
FROM people
JOIN bank_accounts ON bank_accounts.person_id = people.id
JOIN passengers ON passengers.passport_number = people.passport_number
JOIN flights ON flights.id = passengers.flight_id
JOIN airports AS destination_airport
  ON destination_airport.id = flights.destination_airport_id
JOIN phone_calls ON people.phone_number = phone_calls.caller
JOIN people AS accomplice
  ON phone_calls.receiver = accomplice.phone_number
WHERE people.license_plate IN (
    SELECT license_plate
    FROM bakery_security_logs
    WHERE year = 2024
      AND month = 7
      AND day = 28
      AND hour = 10
      AND minute BETWEEN 15 AND 25
      AND activity = 'exit'
)
AND bank_accounts.account_number IN (
    SELECT account_number
    FROM atm_transactions
    WHERE year = 2024
      AND month = 7
      AND day = 28
      AND atm_location = 'Leggett Street'
      AND transaction_type = 'withdraw'
)
AND phone_calls.year = 2024
AND phone_calls.month = 7
AND phone_calls.day = 28
AND phone_calls.duration < 60
AND people.passport_number IN (
    SELECT passport_number
    FROM passengers
    WHERE flight_id = (
        SELECT id
        FROM (
            SELECT flights.id
            FROM flights
            JOIN airports AS origin_airport
              ON origin_airport.id = flights.origin_airport_id
            WHERE flights.year = 2024
              AND flights.month = 7
              AND flights.day = 29
              AND origin_airport.city = 'Fiftyville'
            ORDER BY hour, minute
            LIMIT 1
        )
    )
);

