#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int h = 0; h < height; h++)
    {
        for (int w = 0; w < width; w++)
        {
            float average =
                (image[h][w].rgbtBlue + image[h][w].rgbtRed + image[h][w].rgbtGreen) / 3.0;

            int rounded = round(average);

            image[h][w].rgbtBlue = rounded;
            image[h][w].rgbtRed = rounded;
            image[h][w].rgbtGreen = rounded;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int h = 0; h < height; h++)
    {
        for (int w = 0; w < width / 2; w++)
        {
            RGBTRIPLE temp = image[h][w];

            image[h][w] = image[h][width - 1 - w];
            image[h][width - 1 - w] = temp;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE temp[height][width];

    for (int h = 0; h < height; h++)
    {
        for (int w = 0; w < width; w++)
        {
            float sumRed = 0;
            float sumGreen = 0;
            float sumBlue = 0;
            int count = 0;

            for (int i = -1; i <= 1; i++)
            {
                for (int j = -1; j <= 1; j++)
                {
                    if (h + i < 0 || h + i > height - 1)
                        continue;

                    if (w + j < 0 || w + j > width - 1)
                        continue;

                    sumRed += image[h + i][w + j].rgbtRed;
                    sumGreen += image[h + i][w + j].rgbtGreen;
                    sumBlue += image[h + i][w + j].rgbtBlue;
                    count++;
                }
            }

            temp[h][w].rgbtRed = round(sumRed / count);
            temp[h][w].rgbtGreen = round(sumGreen / count);
            temp[h][w].rgbtBlue = round(sumBlue / count);
        }
    }

    for (int h = 0; h < height; h++)
    {
        for (int w = 0; w < width; w++)
        {
            image[h][w] = temp[h][w];
        }
    }

    return;
}

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE temp[height][width];
    int Gx[3][3] = {{-1, 0, 1}, {-2, 0, 2}, {-1, 0, 1}};
    int Gy[3][3] = {{-1, -2, -1}, {0, 0, 0}, {1, 2, 1}};

    for (int h = 0; h < height; h++)
    {
        for (int w = 0; w < width; w++)
        {
            int sumGxRed = 0;
            int sumGyRed = 0;

            int sumGxGreen = 0;
            int sumGyGreen = 0;

            int sumGxBlue = 0;
            int sumGyBlue = 0;

            for (int i = -1; i <= 1; i++)
            {
                for (int j = -1; j <= 1; j++)
                {
                    if (h + i < 0 || h + i > height - 1)
                        continue;

                    if (w + j < 0 || w + j > width - 1)
                        continue;

                    sumGxRed += image[h + i][w + j].rgbtRed * Gx[i + 1][j + 1];
                    sumGyRed += image[h + i][w + j].rgbtRed * Gy[i + 1][j + 1];

                    sumGxBlue += image[h + i][w + j].rgbtBlue * Gx[i + 1][j + 1];
                    sumGyBlue += image[h + i][w + j].rgbtBlue * Gy[i + 1][j + 1];

                    sumGxGreen += image[h + i][w + j].rgbtGreen * Gx[i + 1][j + 1];
                    sumGyGreen += image[h + i][w + j].rgbtGreen * Gy[i + 1][j + 1];
                }
            }

            int red = round(sqrt(sumGxRed * sumGxRed + sumGyRed * sumGyRed));
            if (red > 255)
                red = 255;
            temp[h][w].rgbtRed = red;

            int blue = round(sqrt(sumGxBlue * sumGxBlue + sumGyBlue * sumGyBlue));
            if (blue > 255)
                blue = 255;
            temp[h][w].rgbtBlue = blue;

            int green = round(sqrt(sumGxGreen * sumGxGreen + sumGyGreen * sumGyGreen));
            if (green > 255)
                green = 255;
            temp[h][w].rgbtGreen = green;
        }
    }

    for (int h = 0; h < height; h++)
    {
        for (int w = 0; w < width; w++)
        {
            image[h][w] = temp[h][w];
        }
    }

    return;
}
