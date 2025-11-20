--https://www.sqlstyle.guide/

-- All songs in the database.
SELECT name
FROM songs;

-- All songs in increasing order of tempo.
SELECT name
FROM songs
ORDER BY tempo;

-- The names of the top 5 longest songs, in descending order of length.
SELECT name
FROM songs
ORDER BY duration_ms DESC
LIMIT 5;

-- The names of any songs that have danceability, energy, and valence greater than 0.75.
SELECT name
FROM songs
WHERE danceability > 0.75 AND energy > 0.75 AND valence > 0.75;

-- The average energy of all the songs.
SELECT AVG(energy)
FROM songs;

-- The names of songs that are by Post Malone.
SELECT songs.name
FROM songs
JOIN artists ON songs.artist_id = artists.id
WHERE artists.name = 'Post Malone';

-- The average energy of songs that are by Drake
SELECT AVG(energy)
FROM songs
WHERE artist_id =
(
    SELECT id
    FROM artists
    WHERE name = 'Drake'
);

-- The names of songs that feature other artists.
SELECT name
FROM songs
WHERE name LIKE '%feat.%';
