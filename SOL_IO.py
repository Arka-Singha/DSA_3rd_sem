from datetime import datetime

def calculate_speed_of_light(eclipse_dates):
    # Constants
    distance_jupiter_earth_km = 628.7e6  # Example distance (in kilometers)

    # Calculate time differences between consecutive eclipses
    time_diffs = [eclipse_dates[i + 1] - eclipse_dates[i] for i in range(len(eclipse_dates) - 1)]

    # Calculate average time difference in seconds
    average_time_diff_seconds = sum(diff.total_seconds() for diff in time_diffs) / len(time_diffs)

    # Calculate speed of light
    speed_of_light = distance_jupiter_earth_km / average_time_diff_seconds

    return speed_of_light

# Example eclipse dates (replace with actual eclipse dates)
eclipse_dates = [
    datetime(2023, 1, 1),
    datetime(2023, 2, 1),
    datetime(2023, 3, 1),
    # Add more dates as needed
]

speed_of_light_result = calculate_speed_of_light(eclipse_dates)
print(f"The calculated speed of light is approximately {speed_of_light_result:.2e} km/s")
