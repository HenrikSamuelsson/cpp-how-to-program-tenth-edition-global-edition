# Solution Exercise 1.9

Exercise to test drive a body mass index (BMI) calculator.

Tested the BMI calculator at [National Heart, Lung, and Blood Institute](https://www.nhlbi.nih.gov/health/educational/lose_wt/BMI/bmi-m.htm). A user will enter height and weight and the calculator will present the users BMI as well. The calculator will not automatically tell what the BMI category the user is in, this is a short-coming of the calculator. A good feature is that it is possible to chose between metric and imperial units. Funny note on the units is that the site calls imperial units "standard" units which is very much debatable.

The formula for calculating BMI can be found easily by searching for 'BMI formula". BMI equals a persons weight divided by the square of the height:

BMI = weight / (height * height)

A selection of BMI categories can be found at [Wikipedia](https://en.wikipedia.org/wiki/Body_mass_index):

|Category|BMI|
|---|---|
|Underweight (Severe thinness)|< 16.0|
|Underweight (Moderate thinness)|16.0 – 16.9|
|Underweight (Mild thinness)|17.0 – 18.4|
|Normal range|18.5 – 24.9|
|Overweight (Pre-obese)|25.0 – 29.9|
|Obese (Class I)|30.0 – 34.9|
|Obese (Class II)|35.0 – 39.9|
|Obese (Class III)|≥ 40.0|

The categorization is a bit off because for example BMI of 16.95 does not fit any of the categories, the specification needs to be improved before being able to implement in code.
 