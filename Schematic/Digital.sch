EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A3 16535 11693
encoding utf-8
Sheet 8 9
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Wire Wire Line
	5700 3700 5700 4000
Wire Wire Line
	5700 4000 6000 4000
$Comp
L power:+5V #PWR?
U 1 1 64EBE07C
P 5700 3700
F 0 "#PWR?" H 5700 3550 50  0001 C CNN
F 1 "+5V" H 5715 3873 50  0000 C CNN
F 2 "" H 5700 3700 50  0001 C CNN
F 3 "" H 5700 3700 50  0001 C CNN
	1    5700 3700
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR?
U 1 1 64EBEC94
P 7350 6150
F 0 "#PWR?" H 7350 5900 50  0001 C CNN
F 1 "GND" H 7355 5977 50  0000 C CNN
F 2 "" H 7350 6150 50  0001 C CNN
F 3 "" H 7350 6150 50  0001 C CNN
	1    7350 6150
	1    0    0    -1  
$EndComp
Wire Wire Line
	7200 6000 7350 6000
Wire Wire Line
	7350 6000 7350 6150
$Comp
L power:+3.3V #PWR?
U 1 1 64ECA390
P 7200 3850
F 0 "#PWR?" H 7200 3700 50  0001 C CNN
F 1 "+3.3V" H 7215 4023 50  0000 C CNN
F 2 "" H 7200 3850 50  0001 C CNN
F 3 "" H 7200 3850 50  0001 C CNN
	1    7200 3850
	1    0    0    -1  
$EndComp
Wire Wire Line
	7200 3850 7200 4000
$Comp
L 74xx:74HC165 U?
U 1 1 64DD9AE5
P 2100 1850
F 0 "U?" H 2100 1800 50  0000 C CNN
F 1 "74HC165" H 2200 1650 50  0000 C CNN
F 2 "" H 2100 1850 50  0001 C CNN
F 3 "https://assets.nexperia.com/documents/data-sheet/74HC_HCT165.pdf" H 2100 1850 50  0001 C CNN
	1    2100 1850
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR?
U 1 1 64DD9B19
P 2100 950
F 0 "#PWR?" H 2100 800 50  0001 C CNN
F 1 "+3.3V" H 2115 1123 50  0000 C CNN
F 2 "" H 2100 950 50  0001 C CNN
F 3 "" H 2100 950 50  0001 C CNN
	1    2100 950 
	1    0    0    -1  
$EndComp
Text GLabel 1100 2250 0    50   Input ~ 0
SR_LOAD
Wire Wire Line
	1100 2250 1600 2250
Text GLabel 1100 2450 0    50   Input ~ 0
SR_CLK
Wire Wire Line
	1100 2450 1600 2450
Text GLabel 1100 2550 0    50   Input ~ 0
SR_CE
Wire Wire Line
	1100 2550 1600 2550
Text GLabel 3000 1250 2    50   Input ~ 0
SR_DATA
Wire Wire Line
	3000 1250 2600 1250
$Comp
L power:GND #PWR?
U 1 1 64DD9B3A
P 2100 2900
F 0 "#PWR?" H 2100 2650 50  0001 C CNN
F 1 "GND" H 2105 2727 50  0000 C CNN
F 2 "" H 2100 2900 50  0001 C CNN
F 3 "" H 2100 2900 50  0001 C CNN
	1    2100 2900
	1    0    0    -1  
$EndComp
Wire Wire Line
	2100 2900 2100 2850
Text GLabel 1350 1350 0    50   Input ~ 0
SS0
Wire Wire Line
	1350 1350 1600 1350
Text GLabel 1500 1450 0    50   Input ~ 0
SS1
Wire Wire Line
	1500 1450 1600 1450
Text GLabel 1350 1550 0    50   Input ~ 0
SS2
Wire Wire Line
	1350 1550 1600 1550
Text GLabel 1500 1650 0    50   Input ~ 0
SS3
Wire Wire Line
	1500 1650 1600 1650
Text GLabel 1350 1750 0    50   Input ~ 0
SS4
Wire Wire Line
	1350 1750 1600 1750
Text GLabel 1500 1850 0    50   Input ~ 0
SS5
Wire Wire Line
	1500 1850 1600 1850
Text GLabel 1350 1950 0    50   Input ~ 0
SS6
Wire Wire Line
	1350 1950 1600 1950
Text GLabel 1500 2050 0    50   Input ~ 0
SS7
Wire Wire Line
	1500 2050 1600 2050
$Comp
L 74xx:74HC165 U?
U 1 1 64E05410
P 2100 4300
F 0 "U?" H 2100 4250 50  0000 C CNN
F 1 "74HC165" H 2200 4100 50  0000 C CNN
F 2 "" H 2100 4300 50  0001 C CNN
F 3 "https://assets.nexperia.com/documents/data-sheet/74HC_HCT165.pdf" H 2100 4300 50  0001 C CNN
	1    2100 4300
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR?
U 1 1 64E05444
P 2100 3400
F 0 "#PWR?" H 2100 3250 50  0001 C CNN
F 1 "+3.3V" H 2115 3573 50  0000 C CNN
F 2 "" H 2100 3400 50  0001 C CNN
F 3 "" H 2100 3400 50  0001 C CNN
	1    2100 3400
	1    0    0    -1  
$EndComp
Text GLabel 1100 4700 0    50   Input ~ 0
SR_LOAD
Wire Wire Line
	1100 4700 1600 4700
Text GLabel 1100 4900 0    50   Input ~ 0
SR_CLK
Wire Wire Line
	1100 4900 1600 4900
Text GLabel 1100 5000 0    50   Input ~ 0
SR_CE
Wire Wire Line
	1100 5000 1600 5000
$Comp
L power:GND #PWR?
U 1 1 64E05464
P 2100 5350
F 0 "#PWR?" H 2100 5100 50  0001 C CNN
F 1 "GND" H 2105 5177 50  0000 C CNN
F 2 "" H 2100 5350 50  0001 C CNN
F 3 "" H 2100 5350 50  0001 C CNN
	1    2100 5350
	1    0    0    -1  
$EndComp
Wire Wire Line
	2100 5350 2100 5300
Text GLabel 1350 3800 0    50   Input ~ 0
SS8
Wire Wire Line
	1350 3800 1600 3800
Text GLabel 1500 3900 0    50   Input ~ 0
SS9
Wire Wire Line
	1500 3900 1600 3900
Text GLabel 1350 4000 0    50   Input ~ 0
SS10
Wire Wire Line
	1350 4000 1600 4000
Text GLabel 1500 4100 0    50   Input ~ 0
SS11
Wire Wire Line
	1500 4100 1600 4100
Text GLabel 1350 4200 0    50   Input ~ 0
SS12
Wire Wire Line
	1350 4200 1600 4200
Text GLabel 1500 4300 0    50   Input ~ 0
SS13
Wire Wire Line
	1500 4300 1600 4300
Text GLabel 1350 4400 0    50   Input ~ 0
SS14
Wire Wire Line
	1350 4400 1600 4400
Text GLabel 1500 4500 0    50   Input ~ 0
SS15
Wire Wire Line
	1500 4500 1600 4500
Wire Wire Line
	1600 1250 600  1250
Wire Wire Line
	600  1250 600  3150
Wire Wire Line
	600  3150 2600 3150
Wire Wire Line
	2600 3150 2600 3700
$Comp
L 74xx:74HC165 U?
U 1 1 64E1102D
P 2100 6800
F 0 "U?" H 2100 6750 50  0000 C CNN
F 1 "74HC165" H 2200 6600 50  0000 C CNN
F 2 "" H 2100 6800 50  0001 C CNN
F 3 "https://assets.nexperia.com/documents/data-sheet/74HC_HCT165.pdf" H 2100 6800 50  0001 C CNN
	1    2100 6800
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR?
U 1 1 64E11061
P 2100 5900
F 0 "#PWR?" H 2100 5750 50  0001 C CNN
F 1 "+3.3V" H 2115 6073 50  0000 C CNN
F 2 "" H 2100 5900 50  0001 C CNN
F 3 "" H 2100 5900 50  0001 C CNN
	1    2100 5900
	1    0    0    -1  
$EndComp
Text GLabel 1100 7200 0    50   Input ~ 0
SR_LOAD
Wire Wire Line
	1100 7200 1600 7200
Text GLabel 1100 7400 0    50   Input ~ 0
SR_CLK
Wire Wire Line
	1100 7400 1600 7400
Text GLabel 1100 7500 0    50   Input ~ 0
SR_CE
Wire Wire Line
	1100 7500 1600 7500
$Comp
L power:GND #PWR?
U 1 1 64E1107F
P 2100 7850
F 0 "#PWR?" H 2100 7600 50  0001 C CNN
F 1 "GND" H 2105 7677 50  0000 C CNN
F 2 "" H 2100 7850 50  0001 C CNN
F 3 "" H 2100 7850 50  0001 C CNN
	1    2100 7850
	1    0    0    -1  
$EndComp
Wire Wire Line
	2100 7850 2100 7800
Wire Wire Line
	2600 5650 2600 6200
Wire Wire Line
	1600 3700 650  3700
Wire Wire Line
	650  3700 650  5650
Wire Wire Line
	650  5650 2600 5650
$Comp
L 74xx:74HC165 U?
U 1 1 64E183BE
P 2100 9250
F 0 "U?" H 2100 9200 50  0000 C CNN
F 1 "74HC165" H 2200 9050 50  0000 C CNN
F 2 "" H 2100 9250 50  0001 C CNN
F 3 "https://assets.nexperia.com/documents/data-sheet/74HC_HCT165.pdf" H 2100 9250 50  0001 C CNN
	1    2100 9250
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR?
U 1 1 64E183F2
P 2100 8350
F 0 "#PWR?" H 2100 8200 50  0001 C CNN
F 1 "+3.3V" H 2115 8523 50  0000 C CNN
F 2 "" H 2100 8350 50  0001 C CNN
F 3 "" H 2100 8350 50  0001 C CNN
	1    2100 8350
	1    0    0    -1  
$EndComp
Text GLabel 1100 9650 0    50   Input ~ 0
SR_LOAD
Wire Wire Line
	1100 9650 1600 9650
Text GLabel 1100 9850 0    50   Input ~ 0
SR_CLK
Wire Wire Line
	1100 9850 1600 9850
Text GLabel 1100 9950 0    50   Input ~ 0
SR_CE
Wire Wire Line
	1100 9950 1600 9950
$Comp
L power:GND #PWR?
U 1 1 64E18410
P 2100 10300
F 0 "#PWR?" H 2100 10050 50  0001 C CNN
F 1 "GND" H 2105 10127 50  0000 C CNN
F 2 "" H 2100 10300 50  0001 C CNN
F 3 "" H 2100 10300 50  0001 C CNN
	1    2100 10300
	1    0    0    -1  
$EndComp
Wire Wire Line
	2100 10300 2100 10250
Wire Wire Line
	2600 8100 2600 8650
Wire Wire Line
	650  8100 2600 8100
Wire Wire Line
	1600 6200 650  6200
Wire Wire Line
	650  6200 650  8100
Text GLabel 1350 6300 0    50   Input ~ 0
ENCA_L
Wire Wire Line
	1350 6300 1600 6300
Text GLabel 1500 6400 0    50   Input ~ 0
ENCA_R
Wire Wire Line
	1500 6400 1600 6400
Text GLabel 1350 6500 0    50   Input ~ 0
ENCB_L
Wire Wire Line
	1350 6500 1600 6500
Text GLabel 1500 6600 0    50   Input ~ 0
ENCB_R
Wire Wire Line
	1500 6600 1600 6600
Text GLabel 1350 6700 0    50   Input ~ 0
ENCC_L
Wire Wire Line
	1350 6700 1600 6700
Text GLabel 1500 6800 0    50   Input ~ 0
ENCC_R
Wire Wire Line
	1500 6800 1600 6800
Text GLabel 1350 6900 0    50   Input ~ 0
ENCD_L
Wire Wire Line
	1350 6900 1600 6900
Text GLabel 1500 7000 0    50   Input ~ 0
ENCD_R
Wire Wire Line
	1500 7000 1600 7000
Text GLabel 5850 5600 0    50   Input ~ 0
SR_LOAD
Wire Wire Line
	5850 5600 6000 5600
Text GLabel 5850 5700 0    50   Input ~ 0
SR_CLK
Wire Wire Line
	5850 5700 6000 5700
Text GLabel 5750 5800 0    50   Input ~ 0
SR_CE
Wire Wire Line
	5750 5800 6000 5800
Text GLabel 5700 5300 0    50   Input ~ 0
SR_DATA
Wire Wire Line
	5700 5300 6000 5300
Text GLabel 7400 4900 2    50   Input ~ 0
SCK
Text GLabel 7450 5000 2    50   Input ~ 0
SDI
Wire Wire Line
	7450 5000 7200 5000
Wire Wire Line
	7200 4900 7400 4900
$Comp
L Potentiometer_Digital:MCP42010 U?
U 1 1 64E40CD8
P 13250 2950
F 0 "U?" H 13400 3550 50  0000 C CNN
F 1 "MCP42010" H 13550 3450 50  0000 C CNN
F 2 "" H 13250 3050 50  0001 C CNN
F 3 "http://ww1.microchip.com/downloads/en/DeviceDoc/11195c.pdf" H 13250 3050 50  0001 C CNN
	1    13250 2950
	1    0    0    -1  
$EndComp
Text GLabel 5750 5000 0    50   Input ~ 0
POT_CS
Wire Wire Line
	5750 5000 6000 5000
Text GLabel 12450 2650 0    50   Input ~ 0
SCK
Wire Wire Line
	12450 2650 12750 2650
Text GLabel 12450 2750 0    50   Input ~ 0
SDI
Wire Wire Line
	12450 2750 12750 2750
Text GLabel 12650 2950 0    50   Input ~ 0
POT_CS
Wire Wire Line
	12650 2950 12750 2950
$Comp
L power:+3.3V #PWR?
U 1 1 64E52A94
P 13250 2450
F 0 "#PWR?" H 13250 2300 50  0001 C CNN
F 1 "+3.3V" H 13265 2623 50  0000 C CNN
F 2 "" H 13250 2450 50  0001 C CNN
F 3 "" H 13250 2450 50  0001 C CNN
	1    13250 2450
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR?
U 1 1 64E537B1
P 13250 3450
F 0 "#PWR?" H 13250 3200 50  0001 C CNN
F 1 "GND" H 13255 3277 50  0000 C CNN
F 2 "" H 13250 3450 50  0001 C CNN
F 3 "" H 13250 3450 50  0001 C CNN
	1    13250 3450
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR?
U 1 1 64E543D1
P 12400 3250
F 0 "#PWR?" H 12400 3100 50  0001 C CNN
F 1 "+3.3V" H 12415 3423 50  0000 C CNN
F 2 "" H 12400 3250 50  0001 C CNN
F 3 "" H 12400 3250 50  0001 C CNN
	1    12400 3250
	1    0    0    -1  
$EndComp
Wire Wire Line
	12400 3250 12750 3250
Wire Wire Line
	12750 3150 12750 3250
Connection ~ 12750 3250
NoConn ~ 2600 6300
NoConn ~ 2600 3800
NoConn ~ 2600 1350
NoConn ~ 2600 8750
Text GLabel 1350 8750 0    50   Input ~ 0
ENCA_BUTTON
Text GLabel 1350 8850 0    50   Input ~ 0
ENCB_BUTTON
Text GLabel 1350 8950 0    50   Input ~ 0
ENCC_BUTTON
Text GLabel 1350 9050 0    50   Input ~ 0
ENCD_BUTTON
Wire Wire Line
	1350 8950 1600 8950
Wire Wire Line
	1350 8850 1600 8850
Wire Wire Line
	1350 8750 1600 8750
NoConn ~ 1600 9150
NoConn ~ 1600 9250
NoConn ~ 1600 9350
NoConn ~ 1600 9450
Wire Wire Line
	1350 9050 1600 9050
NoConn ~ 1600 8650
Wire Wire Line
	12100 2850 12750 2850
Text GLabel 14050 2650 2    50   Input ~ 0
Kick1
Wire Wire Line
	14050 2650 13750 2650
$Comp
L power:GND #PWR?
U 1 1 64EC1FF4
P 13950 2850
F 0 "#PWR?" H 13950 2600 50  0001 C CNN
F 1 "GND" H 14100 2800 50  0000 C CNN
F 2 "" H 13950 2850 50  0001 C CNN
F 3 "" H 13950 2850 50  0001 C CNN
	1    13950 2850
	1    0    0    -1  
$EndComp
Wire Wire Line
	13750 2850 13950 2850
Text GLabel 14050 2750 2    50   Input ~ 0
Kick1Out
Wire Wire Line
	14050 2750 13750 2750
Text GLabel 14050 3050 2    50   Input ~ 0
Kick2
Wire Wire Line
	14050 3050 13750 3050
$Comp
L power:GND #PWR?
U 1 1 64ECBDAB
P 13950 3250
F 0 "#PWR?" H 13950 3000 50  0001 C CNN
F 1 "GND" H 14100 3200 50  0000 C CNN
F 2 "" H 13950 3250 50  0001 C CNN
F 3 "" H 13950 3250 50  0001 C CNN
	1    13950 3250
	1    0    0    -1  
$EndComp
Wire Wire Line
	13750 3250 13950 3250
Text GLabel 14050 3150 2    50   Input ~ 0
Kick2Out
Wire Wire Line
	14050 3150 13750 3150
$Comp
L Potentiometer_Digital:MCP42010 U?
U 1 1 64ECF096
P 13250 4450
F 0 "U?" H 13400 5050 50  0000 C CNN
F 1 "MCP42010" H 13550 4950 50  0000 C CNN
F 2 "" H 13250 4550 50  0001 C CNN
F 3 "http://ww1.microchip.com/downloads/en/DeviceDoc/11195c.pdf" H 13250 4550 50  0001 C CNN
	1    13250 4450
	1    0    0    -1  
$EndComp
Text GLabel 12450 4150 0    50   Input ~ 0
SCK
Wire Wire Line
	12450 4150 12750 4150
Text GLabel 12650 4450 0    50   Input ~ 0
POT_CS
Wire Wire Line
	12650 4450 12750 4450
$Comp
L power:+3.3V #PWR?
U 1 1 64ECF0CE
P 13250 3950
F 0 "#PWR?" H 13250 3800 50  0001 C CNN
F 1 "+3.3V" H 13265 4123 50  0000 C CNN
F 2 "" H 13250 3950 50  0001 C CNN
F 3 "" H 13250 3950 50  0001 C CNN
	1    13250 3950
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR?
U 1 1 64ECF0E6
P 13250 4950
F 0 "#PWR?" H 13250 4700 50  0001 C CNN
F 1 "GND" H 13255 4777 50  0000 C CNN
F 2 "" H 13250 4950 50  0001 C CNN
F 3 "" H 13250 4950 50  0001 C CNN
	1    13250 4950
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR?
U 1 1 64ECF0F8
P 12400 4750
F 0 "#PWR?" H 12400 4600 50  0001 C CNN
F 1 "+3.3V" H 12415 4923 50  0000 C CNN
F 2 "" H 12400 4750 50  0001 C CNN
F 3 "" H 12400 4750 50  0001 C CNN
	1    12400 4750
	1    0    0    -1  
$EndComp
Wire Wire Line
	12400 4750 12750 4750
Wire Wire Line
	12750 4650 12750 4750
Connection ~ 12750 4750
Wire Wire Line
	12100 4350 12750 4350
Text GLabel 14050 4150 2    50   Input ~ 0
Snare
Wire Wire Line
	14050 4150 13750 4150
$Comp
L power:GND #PWR?
U 1 1 64ECF116
P 13950 4350
F 0 "#PWR?" H 13950 4100 50  0001 C CNN
F 1 "GND" H 14100 4300 50  0000 C CNN
F 2 "" H 13950 4350 50  0001 C CNN
F 3 "" H 13950 4350 50  0001 C CNN
	1    13950 4350
	1    0    0    -1  
$EndComp
Wire Wire Line
	13750 4350 13950 4350
Text GLabel 14050 4250 2    50   Input ~ 0
SnareOut
Wire Wire Line
	14050 4250 13750 4250
Text GLabel 14050 4550 2    50   Input ~ 0
Clap
Wire Wire Line
	14050 4550 13750 4550
$Comp
L power:GND #PWR?
U 1 1 64ECF12D
P 13950 4750
F 0 "#PWR?" H 13950 4500 50  0001 C CNN
F 1 "GND" H 14100 4700 50  0000 C CNN
F 2 "" H 13950 4750 50  0001 C CNN
F 3 "" H 13950 4750 50  0001 C CNN
	1    13950 4750
	1    0    0    -1  
$EndComp
Wire Wire Line
	13750 4750 13950 4750
Text GLabel 14050 4650 2    50   Input ~ 0
ClapOut
Wire Wire Line
	14050 4650 13750 4650
Wire Wire Line
	12100 2850 12100 4250
Wire Wire Line
	12100 4250 12750 4250
$Comp
L Potentiometer_Digital:MCP42010 U?
U 1 1 64EDD4D1
P 13250 5950
F 0 "U?" H 13400 6550 50  0000 C CNN
F 1 "MCP42010" H 13550 6450 50  0000 C CNN
F 2 "" H 13250 6050 50  0001 C CNN
F 3 "http://ww1.microchip.com/downloads/en/DeviceDoc/11195c.pdf" H 13250 6050 50  0001 C CNN
	1    13250 5950
	1    0    0    -1  
$EndComp
Text GLabel 12450 5650 0    50   Input ~ 0
SCK
Wire Wire Line
	12450 5650 12750 5650
Text GLabel 12650 5950 0    50   Input ~ 0
POT_CS
Wire Wire Line
	12650 5950 12750 5950
$Comp
L power:+3.3V #PWR?
U 1 1 64EDD507
P 13250 5450
F 0 "#PWR?" H 13250 5300 50  0001 C CNN
F 1 "+3.3V" H 13265 5623 50  0000 C CNN
F 2 "" H 13250 5450 50  0001 C CNN
F 3 "" H 13250 5450 50  0001 C CNN
	1    13250 5450
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR?
U 1 1 64EDD51F
P 13250 6450
F 0 "#PWR?" H 13250 6200 50  0001 C CNN
F 1 "GND" H 13255 6277 50  0000 C CNN
F 2 "" H 13250 6450 50  0001 C CNN
F 3 "" H 13250 6450 50  0001 C CNN
	1    13250 6450
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR?
U 1 1 64EDD531
P 12400 6250
F 0 "#PWR?" H 12400 6100 50  0001 C CNN
F 1 "+3.3V" H 12415 6423 50  0000 C CNN
F 2 "" H 12400 6250 50  0001 C CNN
F 3 "" H 12400 6250 50  0001 C CNN
	1    12400 6250
	1    0    0    -1  
$EndComp
Wire Wire Line
	12400 6250 12750 6250
Wire Wire Line
	12750 6150 12750 6250
Connection ~ 12750 6250
Wire Wire Line
	12100 5850 12750 5850
Text GLabel 14050 5650 2    50   Input ~ 0
OpenHat
Wire Wire Line
	14050 5650 13750 5650
$Comp
L power:GND #PWR?
U 1 1 64EDD54F
P 13950 5850
F 0 "#PWR?" H 13950 5600 50  0001 C CNN
F 1 "GND" H 14100 5800 50  0000 C CNN
F 2 "" H 13950 5850 50  0001 C CNN
F 3 "" H 13950 5850 50  0001 C CNN
	1    13950 5850
	1    0    0    -1  
$EndComp
Wire Wire Line
	13750 5850 13950 5850
Text GLabel 14050 5750 2    50   Input ~ 0
OpenHatOut
Wire Wire Line
	14050 5750 13750 5750
Text GLabel 14050 6050 2    50   Input ~ 0
ClosedHat
Wire Wire Line
	14050 6050 13750 6050
$Comp
L power:GND #PWR?
U 1 1 64EDD566
P 13950 6250
F 0 "#PWR?" H 13950 6000 50  0001 C CNN
F 1 "GND" H 14100 6200 50  0000 C CNN
F 2 "" H 13950 6250 50  0001 C CNN
F 3 "" H 13950 6250 50  0001 C CNN
	1    13950 6250
	1    0    0    -1  
$EndComp
Wire Wire Line
	13750 6250 13950 6250
Text GLabel 14050 6150 2    50   Input ~ 0
ClosedHatOut
Wire Wire Line
	14050 6150 13750 6150
Wire Wire Line
	12100 4350 12100 5750
Wire Wire Line
	12100 5750 12750 5750
$Comp
L Potentiometer_Digital:MCP42010 U?
U 1 1 64EE64FA
P 13250 7500
F 0 "U?" H 13400 8100 50  0000 C CNN
F 1 "MCP42010" H 13550 8000 50  0000 C CNN
F 2 "" H 13250 7600 50  0001 C CNN
F 3 "http://ww1.microchip.com/downloads/en/DeviceDoc/11195c.pdf" H 13250 7600 50  0001 C CNN
	1    13250 7500
	1    0    0    -1  
$EndComp
Text GLabel 12450 7200 0    50   Input ~ 0
SCK
Wire Wire Line
	12450 7200 12750 7200
Text GLabel 12650 7500 0    50   Input ~ 0
POT_CS
Wire Wire Line
	12650 7500 12750 7500
$Comp
L power:+3.3V #PWR?
U 1 1 64EE6530
P 13250 7000
F 0 "#PWR?" H 13250 6850 50  0001 C CNN
F 1 "+3.3V" H 13265 7173 50  0000 C CNN
F 2 "" H 13250 7000 50  0001 C CNN
F 3 "" H 13250 7000 50  0001 C CNN
	1    13250 7000
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR?
U 1 1 64EE6548
P 13250 8000
F 0 "#PWR?" H 13250 7750 50  0001 C CNN
F 1 "GND" H 13255 7827 50  0000 C CNN
F 2 "" H 13250 8000 50  0001 C CNN
F 3 "" H 13250 8000 50  0001 C CNN
	1    13250 8000
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR?
U 1 1 64EE655A
P 12400 7800
F 0 "#PWR?" H 12400 7650 50  0001 C CNN
F 1 "+3.3V" H 12415 7973 50  0000 C CNN
F 2 "" H 12400 7800 50  0001 C CNN
F 3 "" H 12400 7800 50  0001 C CNN
	1    12400 7800
	1    0    0    -1  
$EndComp
Wire Wire Line
	12400 7800 12750 7800
Wire Wire Line
	12750 7700 12750 7800
Connection ~ 12750 7800
Wire Wire Line
	12100 7300 12750 7300
Wire Wire Line
	12100 7300 12100 5850
NoConn ~ 12750 7400
Text GLabel 5750 5100 0    50   Input ~ 0
DISP1_CS
Wire Wire Line
	5750 5100 6000 5100
Text GLabel 5750 5200 0    50   Input ~ 0
DISP2_CS
Wire Wire Line
	5750 5200 6000 5200
$Comp
L 74xx:74HC595 U?
U 1 1 64F28432
P 4750 8250
F 0 "U?" H 5000 8950 50  0000 C CNN
F 1 "74HC595" H 5100 8850 50  0000 C CNN
F 2 "" H 4750 8250 50  0001 C CNN
F 3 "http://www.ti.com/lit/ds/symlink/sn74hc595.pdf" H 4750 8250 50  0001 C CNN
	1    4750 8250
	1    0    0    -1  
$EndComp
Text Notes 600  700  0    50   ~ 0
These four PISO registers shift in the control \ninput data from buttons and encoders 32 bits at a time
Text GLabel 7450 5100 2    50   Input ~ 0
PIXEL_DATA
Wire Wire Line
	7450 5100 7200 5100
Text GLabel 5850 5400 0    50   Input ~ 0
TRIG_DATA
Wire Wire Line
	5850 5400 6000 5400
Text GLabel 5800 5500 0    50   Input ~ 0
TRIG_CLK
Wire Wire Line
	5800 5500 6000 5500
Text GLabel 7450 5200 2    50   Input ~ 0
TRIG_LATCH
Wire Wire Line
	7450 5200 7200 5200
Text GLabel 4250 7850 0    50   Input ~ 0
TRIG_DATA
Wire Wire Line
	4250 7850 4350 7850
Wire Wire Line
	4750 7550 4750 7650
$Comp
L power:GND #PWR?
U 1 1 64F4E1E1
P 4750 9050
F 0 "#PWR?" H 4750 8800 50  0001 C CNN
F 1 "GND" H 4755 8877 50  0000 C CNN
F 2 "" H 4750 9050 50  0001 C CNN
F 3 "" H 4750 9050 50  0001 C CNN
	1    4750 9050
	1    0    0    -1  
$EndComp
Wire Wire Line
	4750 9050 4750 8950
$Comp
L power:+5V #PWR?
U 1 1 64F5949F
P 4750 7550
F 0 "#PWR?" H 4750 7400 50  0001 C CNN
F 1 "+5V" H 4765 7723 50  0000 C CNN
F 2 "" H 4750 7550 50  0001 C CNN
F 3 "" H 4750 7550 50  0001 C CNN
	1    4750 7550
	1    0    0    -1  
$EndComp
Text GLabel 4250 8050 0    50   Input ~ 0
TRIG_CLK
Wire Wire Line
	4250 8050 4350 8050
Text GLabel 4200 8350 0    50   Input ~ 0
TRIG_LATCH
Wire Wire Line
	4200 8350 4350 8350
$Comp
L power:GND #PWR?
U 1 1 64F65FD9
P 4350 8550
F 0 "#PWR?" H 4350 8300 50  0001 C CNN
F 1 "GND" H 4355 8377 50  0000 C CNN
F 2 "" H 4350 8550 50  0001 C CNN
F 3 "" H 4350 8550 50  0001 C CNN
	1    4350 8550
	1    0    0    -1  
$EndComp
Wire Wire Line
	4350 8550 4350 8450
$Comp
L power:+5V #PWR?
U 1 1 64F6C635
P 4100 8150
F 0 "#PWR?" H 4100 8000 50  0001 C CNN
F 1 "+5V" V 4115 8278 50  0000 L CNN
F 2 "" H 4100 8150 50  0001 C CNN
F 3 "" H 4100 8150 50  0001 C CNN
	1    4100 8150
	0    -1   -1   0   
$EndComp
Wire Wire Line
	4100 8150 4350 8150
Text GLabel 5300 7850 2    50   Input ~ 0
Kick1Trig
Text GLabel 5300 7950 2    50   Input ~ 0
Kick2Trig
Text GLabel 5300 8050 2    50   Input ~ 0
SnareTrig
Text GLabel 5300 8150 2    50   Input ~ 0
OpenHatTrig
Text GLabel 5300 8250 2    50   Input ~ 0
ClosedHatTrig
Text GLabel 5300 8350 2    50   Input ~ 0
ClapTrig
Text GLabel 5300 8450 2    50   Input ~ 0
ClaveTrig
Wire Wire Line
	5150 7850 5300 7850
Wire Wire Line
	5150 7950 5300 7950
Wire Wire Line
	5150 8050 5300 8050
Wire Wire Line
	5150 8150 5300 8150
Wire Wire Line
	5150 8250 5300 8250
Wire Wire Line
	5150 8350 5300 8350
Wire Wire Line
	5150 8450 5300 8450
NoConn ~ 5150 8550
NoConn ~ 5150 8750
Text Notes 3800 7250 0    50   ~ 0
This shift register handles sending the analog trigger signals\n
Text Notes 10950 2500 0    50   ~ 0
These four digital potentiometers feed \nthe output mixer and allow us to change \nthe level of individual notes in a sequence \nwhile keeping the signal chain purely analog
Text GLabel 7450 5500 2    50   Input ~ 0
MIDI_IN
Text GLabel 7450 5400 2    50   Input ~ 0
MIDI_OUT
Wire Wire Line
	7450 5400 7200 5400
NoConn ~ 6000 4400
NoConn ~ 6000 4300
NoConn ~ 7200 4300
NoConn ~ 7200 4400
NoConn ~ 7200 5600
NoConn ~ 7200 5700
NoConn ~ 6000 4100
$Comp
L power:GND #PWR?
U 1 1 64F0170B
P 13950 7400
F 0 "#PWR?" H 13950 7150 50  0001 C CNN
F 1 "GND" H 14100 7350 50  0000 C CNN
F 2 "" H 13950 7400 50  0001 C CNN
F 3 "" H 13950 7400 50  0001 C CNN
	1    13950 7400
	1    0    0    -1  
$EndComp
Wire Wire Line
	14050 7300 13750 7300
Text GLabel 14050 7300 2    50   Input ~ 0
ClaveOut
Wire Wire Line
	13750 7400 13950 7400
Wire Wire Line
	14050 7200 13750 7200
Text GLabel 14050 7200 2    50   Input ~ 0
Clave
Text Notes 600  9400 0    50   ~ 0
Note: we have room for \nfour more inputs here
Wire Wire Line
	7200 5500 7450 5500
$Comp
L ESP32-DEVKIT-V1:ESP32-DEVKIT-V1 U?
U 1 1 64EA0A3C
P 6600 5000
F 0 "U?" H 6600 6267 50  0000 C CNN
F 1 "ESP32-DEVKIT-V1" H 6600 6176 50  0000 C CNN
F 2 "MODULE_ESP32_DEVKIT_V1" H 6600 5000 50  0001 L BNN
F 3 "" H 6600 5000 50  0001 L BNN
F 4 "N/A" H 6600 5000 50  0001 L BNN "PARTREV"
F 5 "6.8 mm" H 6600 5000 50  0001 L BNN "MAXIMUM_PACKAGE_HEIGHT"
F 6 "Manufacturer Recommendations" H 6600 5000 50  0001 L BNN "STANDARD"
F 7 "DOIT" H 6600 5000 50  0001 L BNN "MANUFACTURER"
	1    6600 5000
	1    0    0    -1  
$EndComp
Text GLabel 5750 4900 0    50   Input ~ 0
READER_CS
Wire Wire Line
	5750 4900 6000 4900
Text GLabel 7450 5300 2    50   Input ~ 0
I2S_CLK
Wire Wire Line
	7450 5300 7200 5300
Text GLabel 7400 4600 2    50   Input ~ 0
I2S_LRC
Wire Wire Line
	7400 4600 7200 4600
Text GLabel 7400 4700 2    50   Input ~ 0
I2S_DATA
Wire Wire Line
	7400 4700 7200 4700
$Comp
L Audio:MAX9357A U?
U 1 1 650570F5
P 9050 7450
F 0 "U?" H 9378 6696 50  0000 L CNN
F 1 "MAX9357A" H 9378 6605 50  0000 L CNN
F 2 "" H 9050 7450 50  0001 C CNN
F 3 "" H 9050 7450 50  0001 C CNN
	1    9050 7450
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR?
U 1 1 65058884
P 9050 7450
F 0 "#PWR?" H 9050 7300 50  0001 C CNN
F 1 "+3.3V" H 9065 7623 50  0000 C CNN
F 2 "" H 9050 7450 50  0001 C CNN
F 3 "" H 9050 7450 50  0001 C CNN
	1    9050 7450
	1    0    0    -1  
$EndComp
Wire Wire Line
	9050 7450 9050 7650
$Comp
L power:GND #PWR?
U 1 1 65060206
P 9050 8950
F 0 "#PWR?" H 9050 8700 50  0001 C CNN
F 1 "GND" H 9055 8777 50  0000 C CNN
F 2 "" H 9050 8950 50  0001 C CNN
F 3 "" H 9050 8950 50  0001 C CNN
	1    9050 8950
	1    0    0    -1  
$EndComp
Wire Wire Line
	9050 8950 9050 8900
Wire Wire Line
	8650 8500 8650 8900
Wire Wire Line
	8650 8900 9050 8900
Connection ~ 9050 8900
Wire Wire Line
	9050 8900 9050 8850
Text GLabel 8450 7900 0    50   Input ~ 0
I2S_DATA
Wire Wire Line
	8450 7900 8650 7900
Text GLabel 8450 8050 0    50   Input ~ 0
I2S_CLK
Wire Wire Line
	8450 8050 8650 8050
Text GLabel 8450 8200 0    50   Input ~ 0
I2S_LRC
Wire Wire Line
	8450 8200 8650 8200
NoConn ~ 8650 8350
Text Notes 7650 9300 0    50   ~ 0
This corresponds to a 7-pin I2S amp breakout, \nthe amp output gets fed from a screw terminal on the breakout to AUX
Text GLabel 14050 7600 2    50   Input ~ 0
Aux
Wire Wire Line
	14050 7600 13750 7600
Text GLabel 14050 7700 2    50   Input ~ 0
AuxOut
Wire Wire Line
	14050 7700 13750 7700
$Comp
L power:GND #PWR?
U 1 1 650A0606
P 13900 7800
F 0 "#PWR?" H 13900 7550 50  0001 C CNN
F 1 "GND" H 14050 7750 50  0000 C CNN
F 2 "" H 13900 7800 50  0001 C CNN
F 3 "" H 13900 7800 50  0001 C CNN
	1    13900 7800
	1    0    0    -1  
$EndComp
Wire Wire Line
	13900 7800 13750 7800
$EndSCHEMATC
