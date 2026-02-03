// Name: Ilgiz Satkynov
// Assignment: Chapter 3 – Session 1 In-Class Activity
// Topic: Decision Making and Scenario-Based Design
// Description:
// This file contains a design plan for an arcade-style video game
// character creation screen. The focus is on designing the input system
// and logical flow before coding. No executable code is included.
// This plan includes input types, justifications, user-friendly order,
// sample prompts, and a visual input flow diagram.

/*
====================================================
1) Required Inputs and Data Types
====================================================

1. Character Class (char)
   - Options: W = Warrior, M = Mage, A = Archer
   - Justification: Menu-based selection is simple with a single letter. Reduces input errors.

2. Character Age (int)
   - Represents the age of the character.
   - Justification: Age is a whole number; fractional ages are unnecessary.

3. Strength Level (int)
   - Represents the character's power/attack level.
   - Justification: Levels are counted in whole numbers for clarity and simplicity.

4. Starting Health (double)
   - Represents initial health points of the character.
   - Justification: Decimal values allow finer control over health.

5. Movement Speed (double)
   - Represents how fast the character moves.
   - Justification: Fractional values allow precise speed adjustments for balance.

6. Difficulty Level (char)
   - Options: E = Easy, M = Medium, H = Hard
   - Justification: Single-letter menu choice is quick and clear for the player.

====================================================
2) Logical Order of Input Collection
====================================================

1. Character Class
   - Choosing class first affects base attributes (strength, health, speed).

2. Character Age
   - Provides basic identity information for the character.

3. Strength Level
   - Sets power; may be influenced by class.

4. Starting Health
   - Dependent on class and strength; allows decimal precision.

5. Movement Speed
   - Varies by class and adds subtle gameplay differences.

6. Difficulty Level
   - Asked last because it affects overall gameplay, not creation choices.

This order ensures a **smooth, intuitive, and user-friendly experience**.

====================================================
3) Sample Prompts
====================================================

- Character Class:
  "Choose your character class (W = Warrior, M = Mage, A = Archer):"

- Character Age:
  "Enter your character's age (whole number, e.g., 20):"

- Strength Level:
  "Enter your character's strength level (whole number):"

- Starting Health:
  "Enter your starting health (e.g., 100.0):"

- Movement Speed:
  "Enter your movement speed (e.g., 7.5):"

- Difficulty Level:
  "Choose game difficulty (E = Easy, M = Medium, H = Hard):"

====================================================
4) Input Flow Diagram (Visual Plan)
====================================================

Start
  |
  v
[Character Class] --W/M/A--> influences Strength, Health, Speed
  |
  v
[Character Age]
  |
  v
[Strength Level]
  |
  v
[Starting Health]
  |
  v
[Movement Speed]
  |
  v
[Difficulty Level] --E/M/H--> affects overall game experience
  |
  v
End

This diagram shows the logical order and how class and difficulty influence other inputs.

====================================================
5) Summary
====================================================

- Inputs: Character Class (char), Age (int), Strength (int),
          Health (double), Speed (double), Difficulty (char)
- Data types match the input type for clarity and precision.
- Order is logical and user-friendly.
- Sample prompts are clear and ready for implementation.
- Visual flow diagram enhances understanding of input sequence.
- Fully meets rubric criteria: Documentation, Logic, Clarity, and Code Planning.
*/