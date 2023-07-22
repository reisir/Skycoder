[Shape]
Meter=Shape
Shape=Ellipse  (194 * [&Scale] + ([#EnableRingJitter] = 1 ? [&JitterX2] : 0)),(194 * [&Scale] + ([#EnableRingJitter] = 1 ? [&JitterY2] : 0)),(110*[&Scale]) | Fill Color 0,0,0,0 | Stroke Color #InnerColor# | StrokeWidth (18*[&Scale]) | StrokeDashes (220*PI/81),(440*PI/1323),(3520*PI/3969),(440*PI/1323),(220*PI/147),(440*PI/1323),(4730*PI/3969),(440*PI/1323),(220*PI/147),(440*PI/1323),(7150*PI/3969),(550*PI/567) | Rotate (#RotationDirection# * [MeasureRotate:%]*3.6)
Shape2=Ellipse (194 * [&Scale] + ([#EnableRingJitter] = 1 ? [&JitterX3] : 0)),(194 * [&Scale] + ([#EnableRingJitter] = 1 ? [&JitterY3] : 0)),(134*[&Scale]) | Fill Color 0,0,0,0 | Stroke Color #MiddleSolidColor# | StrokeWidth (18*[&Scale])
Shape3=Ellipse (194 * [&Scale] + ([#EnableRingJitter] = 1 ? [&JitterX4] : 0)),(194 * [&Scale] + ([#EnableRingJitter] = 1 ? [&JitterY4] : 0)),(158*[&Scale]) | Fill Color 0,0,0,0 | Stroke Color #MiddleColor# | StrokeWidth (18*[&Scale]) | StrokeDashes (1580*PI/3969),(632*PI/1323),(158*PI/189),(632*PI/1323),(6794*PI/3969),(790*PI/441),(4582*PI/1323),(3634*PI/3969),(5056*PI/3969),(632*PI/1323),(6794*PI/3969),(632*PI/1323),(158*PI/189),(632*PI/1323),(1580*PI/3969),(632*PI/1323),(1580*PI/3969),(1264*PI/1323) | Rotate (#RotationDirection1# * [MeasureRotate1:%]*3.6)
Shape4=Ellipse (194 * [&Scale] + ([#EnableRingJitter] = 1 ? [&JitterX5] : 0)),(194 * [&Scale] + ([#EnableRingJitter] = 1 ? [&JitterY5] : 0)),(184*[&Scale]) | Fill Color 0,0,0,0 | Stroke Color #OuterColor# | StrokeWidth (20*[&Scale]) | StrokeDashes (184*PI/441),(92*PI/2205),(184*PI/441),(92*PI/2205),(184*PI/441),(92*PI/2205),(184*PI/441),(92*PI/2205),(184*PI/441),(368*PI/735),(184*PI/441),(368*PI/735),(184*PI/441),(368*PI/735),(184*PI/441),(92*PI/2205),(184*PI/441),(368*PI/735),(184*PI/441),(92*PI/2205),(184*PI/441),(92*PI/2205),(184*PI/441),(92*PI/2205),(184*PI/441),(368*PI/735),(184*PI/441),(92*PI/2205),(184*PI/441),(368*PI/735),(184*PI/441),(92*PI/2205),(184*PI/441),(92*PI/2205),(184*PI/441),(92*PI/2205),(184*PI/441),(368*PI/735),(184*PI/441),(3128*PI/2205),(184*PI/441),(92*PI/2205),(184*PI/441),(92*PI/2205),(184*PI/441),(92*PI/2205),(184*PI/441),(368*PI/735),(184*PI/441),(92*PI/2205),(184*PI/441),(92*PI/2205),(184*PI/441),(736*PI/735) | Rotate (#RotationDirection2# * [MeasureRotate2:%]*3.6)
DynamicVariables=1
X=([&Offset] + [&JitterX0])
Y=([&Offset] + [&JitterY0])

[overlaySkull]
Meter=Shape
X=((194 * [&Scale]) + ([#EnableRingJitter] = 1 ? [&JitterX1] : 0))r
Y=((194 * [&Scale]) + ([#EnableRingJitter] = 1 ? [&JitterY1] : 0))r
Shape = Path Path1 | StrokeWidth 0
Shape2 = Path Path2 | StrokeWidth 0
Shape3 = Path Path3 | StrokeWidth 0
Shape4 = Path Path4 | StrokeWidth 0
Shape5 = Path Path5 | StrokeWidth 0
Shape6 = Path Path6 | StrokeWidth 0
Shape7 = Path Path7 | StrokeWidth 0
Shape8 = Path Path8 | StrokeWidth 0
Shape9 = Path Path9 | StrokeWidth 0
Shape10 = Path Path10 | StrokeWidth 0
Shape11 = Path Path11 | StrokeWidth 0
Shape12 = Path Path12 | StrokeWidth 0
Shape13 = Path Path13 | StrokeWidth 0
Shape14 = Path Path14 | StrokeWidth 0
Shape15 = Path Path15 | StrokeWidth 0
Shape16 = Path Path16 | StrokeWidth 0
Shape17 = Ellipse 0,0,95 | Fill Color #CenterColor# | StrokeWidth 0
Shape18 = Combine Shape1 | XOR Shape2 | XOR Shape3 | XOR Shape4 | XOR Shape5 | XOR Shape6 | XOR Shape7 | XOR Shape8 | XOR Shape9 | XOR Shape10 | XOR Shape11 | XOR Shape12 | XOR Shape13 | XOR Shape14 | XOR Shape15 | XOR Shape16 | Offset (-255/4),(-405/6.5)
Shape19 = Combine Shape17 | Exclude Shape18 | Scale [&Scale],[&Scale]
Path1 = 127.685, 36.841 | LineTo 127.685, 81.828 | LineTo 105.654, 96.083 | LineTo 105.654, 88.122 | CurveTo 98.249, 93.306, 105.654, 88.122, 103.063, 91.233 | LineTo 98.249, 104.784 | LineTo 86.956, 111.634 | LineTo 86.956, 99.415 | LineTo 82.143, 99.415 | LineTo 82.143, 112.559 | LineTo 73.257, 118.113 | LineTo 73.257, 103.673 | LineTo 68.444, 103.673 | LineTo 68.444, 120.705 | LineTo 64, 122.557 | LineTo 59.557, 120.706 | LineTo 59.557, 103.674 | LineTo 54.744, 103.674 | LineTo 54.744, 118.114 | LineTo 45.858, 112.56 | LineTo 45.858, 99.415 | LineTo 41.045, 99.415 | LineTo 41.045, 111.634 | LineTo 29.752, 104.784 | LineTo 29.752, 93.306 | CurveTo 22.347, 88.122, 24.938, 91.234, 22.347, 88.122 | LineTo 22.347, 96.083 | LineTo 0.315, 81.828 | LineTo 0.315, 36.841 | LineTo 64, 4.443 | LineTo 127.685, 36.841 | ClosePath 1
Path2 = 97.257, 38.561 | CurveTo 85.535, 60.669, 89.428, 39.503, 84.18, 49.401 | CurveTo 102.166, 79.366, 86.89, 71.937, 94.337, 80.308 | CurveTo 113.888, 57.258, 109.995, 78.424, 115.243, 68.526 | CurveTo 97.257, 38.561, 112.533, 45.99, 105.087, 37.619 | ClosePath 1
Path3 = 82.606, 65.222 | LineTo 82.606, 55.114 | LineTo 75.386, 60.168 | LineTo 82.606, 65.222 | ClosePath 1
Path4 = 116.818, 55.114 | LineTo 116.818, 65.222 | LineTo 124.038, 60.168 | LineTo 116.818, 55.114 | ClosePath 1
Path5 = 111.713, 76.535 | LineTo 104.565, 83.683 | LineTo 113.244, 85.215 | LineTo 111.713, 76.535 | ClosePath 1
Path6 = 95.268, 83.682 | LineTo 88.12, 76.534 | LineTo 86.588, 85.213 | LineTo 95.268, 83.682 | ClosePath 1
Path7 = 87.102, 41.949 | LineTo 94.25, 34.801 | LineTo 85.57, 33.27 | LineTo 87.102, 41.949 | ClosePath 1
Path8 = 104.565, 34.802 | LineTo 111.713, 41.95 | LineTo 113.245, 33.271 | LineTo 104.565, 34.802 | ClosePath 1
Path9 = 72.123, 91.547 | CurveTo 64.432, 83.077, 74.826, 87.59, 64.432, 83.077 | CurveTo 56.741, 91.547, 64.432, 83.077, 54.038, 87.59 | CurveTo 64.432, 90.992, 59.444, 95.504, 64.432, 90.992 | CurveTo 72.123, 91.547, 64.432, 90.992, 69.42, 95.504 | ClosePath 1
Path10 = 14.111, 57.257 | CurveTo 25.833, 79.365, 12.755, 68.525, 18.003, 78.423 | CurveTo 42.464, 60.668, 33.663, 80.307, 41.109, 71.936 | CurveTo 30.742, 38.56, 43.82, 49.4, 38.572, 39.502 | CurveTo 14.111, 57.257, 22.913, 37.619, 15.467, 45.989 | ClosePath 1
Path11 = 52.614, 60.168 | LineTo 45.394, 55.114 | LineTo 45.394, 65.222 | LineTo 52.614, 60.168 | ClosePath 1
Path12 = 3.962, 60.168 | LineTo 11.182, 65.222 | LineTo 11.182, 55.114 | LineTo 3.962, 60.168 | ClosePath 1
Path13 = 14.755, 85.214 | LineTo 23.434, 83.682 | LineTo 16.286, 76.534 | LineTo 14.755, 85.214 | ClosePath 1
Path14 = 41.411, 85.214 | LineTo 39.879, 76.535 | LineTo 32.731, 83.683 | LineTo 41.411, 85.214 | ClosePath 1
Path15 = 42.43, 33.27 | LineTo 33.751, 34.802 | LineTo 40.899, 41.95 | LineTo 42.43, 33.27 | ClosePath 1
Path16 = 14.755, 33.27 | LineTo 16.287, 41.949 | LineTo 23.435, 34.801 | LineTo 14.755, 33.27 | ClosePath 1
DynamicVariables=1
