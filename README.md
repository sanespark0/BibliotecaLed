# 💡 LED Control Library

![Status](https://img.shields.io/badge/status-active-success.svg)
![Language](https://img.shields.io/badge/language-C-blue.svg)
![Platform](https://img.shields.io/badge/platform-embedded-lightgrey.svg)
![License](https://img.shields.io/badge/license-MIT-green.svg)

---

## 🎬 Demonstração

<p align="center">
  <img src="assets/demo.gif" alt="LED Demo" width="400"/>
</p>

---

## 📖 Sobre

Uma biblioteca simples, leve e eficiente para controle de LEDs em sistemas embarcados.

---

## ✨ Funcionalidades

- 🔛 Ligar LED  
- 🔘 Desligar LED  
- 🔄 Alternar estado  
- ✨ Piscar LED  
- 📊 Consultar estado  

---

## ⚙️ API

### 🔛 `led_ligar()`
```c
led_ligar();
led_desligar();
led_alternar();
led_piscar(5, 500);
if (led_estado()) {
    // LED ligado
}

📁 led-library
 ├── led.h
 ├── led.c
 ├── README.md
 └── assets/
     └── demo.gif


