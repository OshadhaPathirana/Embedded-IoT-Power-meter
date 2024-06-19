# Embedded-IoT-Power-meter

## Overview

Embedded-IoT-Power-meter is a project focused on measuring voltage and current waveforms of power supply outputs. By analyzing this data, the system can identify anomalies in the power supply. The project leverages Node-RED for connecting to IoT power meters, displaying the data on a dashboard, and uses Mosquitto MQTT broker for communication.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
  - [Configuration](#configuration)
- [Usage](#usage)
- [Architecture](#architecture)
- [PCB](#PCB)
- [Schematic](#Schematic)
- [Contributing](#contributing)
- [License](#license)

## Introduction

The goal of this project is to create a reliable and efficient system for monitoring and analyzing power supply outputs. By capturing voltage and current waveforms, the system can detect anomalies that may indicate potential issues or inefficiencies in the power supply.

## Features

- Real-time monitoring of voltage and current waveforms
- Anomaly detection
- Node-RED dashboard for visualizing data
- MQTT communication using Mosquitto broker
- Scalable and customizable architecture

## Getting Started

### Prerequisites

Before you begin, ensure you have met the following requirements:

- [Node-RED](https://nodered.org/) installed
- [Mosquitto MQTT Broker](https://mosquitto.org/) installed
- IoT power meter hardware setup and configured

### Installation

1. Clone the repository:

    ```bash
    git clone https://github.com/your-username/Embedded-IoT-Power-meter.git
    ```

2. Navigate to the project directory:

    ```bash
    cd Embedded-IoT-Power-meter
    ```

3. Install the required Node-RED nodes:

    ```bash
    npm install
    ```

### Configuration

1. Configure your Node-RED flow to connect to your IoT power meters.
2. Set up the Mosquitto MQTT broker to handle communication between the IoT devices and Node-RED.

## Usage

1. Start the Mosquitto MQTT broker:

    ```bash
    mosquitto
    ```

2. Start Node-RED:

    ```bash
    node-red
    ```

3. Access the Node-RED dashboard by navigating to:

    ```
    http://localhost:1880
    ```

4. Use the dashboard to monitor voltage and current waveforms in real-time.

## Architecture

The project consists of the following main components:

- **IoT Power Meters:** Measure voltage and current waveforms.
- **Node-RED:** Connects to IoT power meters, processes data, and displays it on a dashboard.
- **Mosquitto MQTT Broker:** Facilitates communication between IoT power meters and Node-RED.

## Contributing

We welcome contributions! Please follow these steps:

1. Fork the repository.
2. Create a new branch (`git checkout -b feature-branch`).
3. Make your changes.
4. Commit your changes (`git commit -m 'Add some feature'`).
5. Push to the branch (`git push origin feature-branch`).
6. Create a Pull Request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
