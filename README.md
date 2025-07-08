# RPG Combat System with Gameplay Ability System

This project implements a complex RPG combat experience using Unreal Engine's Gameplay Ability System (GAS), featuring advanced player mechanics, enemy AI, and game modes.

---

## Core Features

### Player Combat Mechanics

- **Gameplay Ability System Integration**  
  The hero character is fully set up with GAS, including input bindings via gameplay tags and data assets.

- **Melee Combo System**  
  Combines linked animation layers with GAS to create fluid melee combos with light and heavy attacks.

- **Advanced Player Actions**  
  Directional rolling with motion warping for dynamic distances, directional hit reactions, blocking, parrying, and target locking implemented primarily in C++.

- **Combat Feedback and UI**  
  Robust UI notifications communicate damage, status effects, and player states.

---

### Enemy AI and Behavior

- **Enemy Characters**  
  Enemies have attributes, deal damage, react to hits, and can die with appropriate feedback.

- **Advanced AI Movement**  
  AI uses behavior trees and a combination of Blueprint and C++ nodes to perform strafing and projectile attacks.

- **AI Avoidance**  
  Crowd following and detour avoidance components ensure realistic enemy navigation and positioning.

- **Ranged Enemies and Boss Fight**  
  Ranged enemies shoot projectiles and retreat strategically. Boss character features a health bar, powerful melee attacks, and summons minions.

---

### Game Modes and UI

- **Survival Mode**  
  Enemies spawn in waves, challenging the player to survive increasingly difficult encounters.

- **Comprehensive UI Widgets**  
  Includes main menu, pause menu, win screen, and lose screen.

- **Map Integration**  
  Gameplay ported to real maps for immersive combat scenarios.

---

### Technical Highlights

- Extensive use of GAS for abilities, attributes, and effects  
- Combination of C++ and Blueprints to optimize performance and maintainability  
- Use of asynchronous loading to improve startup times  
- Custom function libraries to handle damage and other gameplay systems  
- Behavior Trees and Environment Query System (EQS) for sophisticated AI decision-making  
- Motion warping for dynamic movement mechanics  
- Modular, clean code architecture for scalability and maintainability  
