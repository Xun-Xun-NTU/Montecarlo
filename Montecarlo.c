{
 "cells": [
  {
   "cell_type": "code",
   "execution_count": 1,
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "3.141892"
     ]
    }
   ],
   "source": [
    "#include <stdio.h>\n",
    "#include <time.h>\n",
    "#include <stdlib.h>\n",
    "int main()\n",
    "{\n",
    "    srand(time(0));\n",
    "    int in_circle = 0;\n",
    "    int times = 10000000;\n",
    "    for(int i = 0; i < times; i++){\n",
    "        int x = rand() % 10000;\n",
    "        int y = rand() % 10000;\n",
    "        if (x*x + y*y < 10000*10000){\n",
    "            in_circle++;\n",
    "        }    \n",
    "    }\n",
    "    double pi = (double)in_circle / (double)times * 4;\n",
    "    printf(\"%f\",pi);\n",
    "    return (0);\n",
    "}"
   ]
  }
 ],
 "metadata": {
  "kernelspec": {
   "display_name": "C",
   "language": "c",
   "name": "c"
  },
  "language_info": {
   "file_extension": ".c",
   "mimetype": "text/plain",
   "name": "c"
  }
 },
 "nbformat": 4,
 "nbformat_minor": 4
}
