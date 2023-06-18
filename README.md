# Session Extender for Easymeter electricity meter

Our Easymeter electricity meter does not provide detailed data on the INFO DSS interface if it is in extended session mode. The extended session can be enabled by entering the PIN code. Unfortunately, it falls back to normal mode in case of 120s of inactivity. To keep it in extended session mode, this project blinks the IR every few seconds.
