volatile int output[DIM_Y][DIM_X] = {0};

volatile int input[DIM_Y][DIM_X]= {
{249,258,231,45,279,105,258,276,147,63,186,81,270,177,189,78,120,78,216,108,33,204,201,87,246,90,186,69,201,105,87,6,66,174,207,201,279,168,33,126,87,219,63,57,252,111,294,72,45,210,39,78,273,240,168,219,186,210,288,243},
{15,75,252,81,108,15,138,87,39,171,72,285,246,135,42,201,102,192,129,150,261,24,228,234,264,252,9,153,162,297,96,180,228,204,117,36,78,258,282,117,285,210,102,234,201,3,291,6,51,276,156,168,3,240,258,123,195,267,132,57},
{120,87,93,51,291,213,243,225,27,81,201,168,291,159,258,195,18,249,57,72,84,213,96,87,9,57,210,204,24,45,120,147,288,69,54,135,138,153,63,165,237,264,192,84,123,150,279,0,102,192,72,42,261,168,129,273,81,195,177,108},
{96,153,111,84,225,21,222,63,174,285,87,111,105,279,54,84,129,33,84,87,228,12,129,189,39,114,18,120,12,54,84,264,207,51,51,288,72,129,210,249,270,297,216,75,132,270,15,117,162,258,207,246,126,192,291,21,165,12,144,33},
{66,84,297,129,138,204,120,66,33,30,15,3,183,90,234,15,60,108,132,78,66,195,24,48,246,174,72,111,186,72,0,108,156,297,237,150,204,213,219,93,243,90,99,282,180,189,297,243,297,288,177,219,39,204,270,285,78,198,252,120},
{270,252,228,126,108,21,135,168,237,54,261,36,144,216,177,27,108,30,126,261,18,3,39,216,63,165,57,297,63,12,117,33,120,201,15,84,81,150,252,174,60,72,66,207,288,243,90,252,276,216,216,150,75,255,66,297,120,126,294,39},
{294,270,72,270,27,243,57,108,96,165,282,12,237,207,219,228,150,165,180,126,237,252,279,15,63,201,12,39,183,162,78,177,132,6,6,18,252,63,126,204,84,267,216,24,174,294,108,24,159,144,9,99,99,144,270,162,201,138,204,87},
{0,138,264,291,147,270,9,99,189,291,159,276,258,75,156,288,225,264,171,87,108,180,42,63,180,12,84,81,150,144,168,6,282,291,297,129,117,6,84,9,0,243,141,114,177,153,105,102,117,276,45,81,12,87,147,192,255,87,129,105},
{231,0,114,213,147,267,201,264,276,285,129,132,87,270,246,120,123,207,78,96,183,126,180,51,69,183,243,27,270,75,288,201,231,102,270,78,72,171,42,204,15,174,36,258,0,138,78,282,48,156,234,87,138,270,141,210,153,240,93,279},
{171,81,36,258,42,165,36,270,36,237,30,207,267,222,165,123,60,99,261,264,114,198,210,252,168,51,18,180,147,111,15,177,51,54,135,249,219,174,219,111,267,249,21,234,171,42,213,87,0,177,54,114,75,264,222,99,171,243,279,174},
{210,297,51,117,207,189,66,282,219,141,93,186,246,270,276,273,171,45,63,171,222,273,141,153,93,63,111,120,162,90,294,75,243,48,48,6,93,117,288,12,114,240,54,63,210,186,36,237,231,255,108,12,228,249,21,177,171,132,297,33},
{81,150,108,180,54,15,189,147,132,33,15,102,273,225,165,42,267,204,279,54,15,246,66,246,51,90,279,222,78,279,258,159,129,222,42,39,237,231,186,225,264,57,30,96,282,51,138,105,111,273,159,129,219,84,75,273,30,54,51,108},
{189,165,270,174,90,12,213,183,99,255,267,219,12,153,15,150,204,9,255,18,285,117,147,60,201,78,189,231,288,243,195,180,108,165,210,54,33,126,96,288,237,63,210,252,216,81,102,120,249,216,294,90,189,141,150,90,219,42,177,66},
{141,72,246,105,96,12,162,129,294,258,120,234,177,186,186,249,123,144,69,72,216,66,162,105,63,171,195,141,213,228,207,54,3,9,159,99,21,177,84,18,291,60,252,24,102,294,273,228,294,45,156,213,267,177,18,30,48,72,27,117},
{0,234,27,159,243,42,114,267,78,201,141,69,261,93,96,66,243,225,150,237,270,162,150,93,39,171,282,243,243,9,60,99,246,243,261,45,288,75,12,66,276,153,291,96,102,243,18,45,171,24,285,297,186,291,249,228,162,231,27,261},
{96,246,63,198,189,180,246,33,255,258,255,90,270,249,42,228,48,60,276,75,84,117,75,270,108,180,54,129,111,84,246,63,30,165,264,75,45,210,111,159,24,66,249,150,171,291,81,78,207,213,153,147,30,84,117,294,264,30,279,231},
{270,228,297,156,93,261,231,297,171,198,156,51,123,105,204,294,252,285,228,15,198,84,162,84,24,279,234,291,165,216,222,135,0,75,291,249,36,81,246,63,279,102,117,102,63,177,255,171,162,183,186,216,123,48,156,150,186,246,297,51},
{162,219,45,18,153,192,270,189,273,216,111,111,177,84,213,240,261,168,270,123,210,156,195,33,207,51,183,249,153,36,0,18,114,201,192,267,96,162,12,225,237,123,36,114,207,108,210,168,132,180,147,42,195,42,78,258,249,117,207,105},
{156,63,279,270,267,27,93,219,192,105,144,285,231,39,99,294,147,165,165,279,204,168,180,99,69,258,213,174,231,120,135,243,183,270,69,150,0,162,225,192,126,72,177,57,267,132,207,114,153,228,249,57,99,129,12,168,243,225,198,33},
{201,36,276,87,6,204,93,6,222,21,54,48,249,231,261,216,219,171,186,75,99,291,288,54,123,159,78,222,240,279,255,144,15,90,87,177,294,180,186,72,57,240,123,6,30,240,78,249,267,120,24,69,114,171,279,93,30,60,15,270},
{39,273,114,210,63,201,87,213,240,129,285,297,72,264,162,258,207,96,207,30,219,90,99,189,261,237,282,147,297,153,117,192,126,90,258,45,147,45,258,243,33,102,99,261,66,261,219,129,57,126,162,132,72,117,177,189,54,159,36,207},
{15,12,99,297,102,57,45,105,261,159,207,150,261,6,111,186,267,30,15,180,12,33,171,87,9,48,276,63,66,15,129,237,183,84,234,141,0,135,246,261,297,153,267,258,159,78,144,282,108,18,21,276,51,192,63,60,240,198,282,162},
{69,111,99,252,51,36,93,51,27,195,168,24,207,135,285,66,213,285,207,177,3,228,156,213,120,75,129,216,273,267,81,198,234,36,150,288,72,99,39,258,297,210,282,204,45,123,126,117,111,189,294,270,117,6,39,93,84,171,12,213},
{138,249,114,75,285,120,63,216,78,102,174,75,168,156,135,216,138,117,33,249,9,183,75,126,48,117,222,132,288,90,201,282,39,171,57,180,150,276,96,228,237,270,159,105,285,294,21,123,111,210,228,120,252,3,249,0,276,27,288,120},
{117,189,105,12,219,18,192,69,153,147,153,90,117,12,195,258,6,75,237,273,141,21,252,93,183,57,93,159,84,81,282,57,129,243,69,204,261,117,129,114,264,282,60,240,294,258,54,156,189,294,285,30,15,237,126,198,294,75,216,234},
{159,198,291,144,141,216,48,258,36,177,231,0,159,291,96,9,105,153,21,294,147,162,183,18,102,9,75,252,84,291,189,99,45,180,243,42,255,291,0,291,24,87,147,39,237,102,48,42,255,225,195,258,90,78,276,48,87,207,156,27},
{198,45,285,99,84,228,141,39,78,0,186,258,87,189,0,24,291,48,225,246,132,120,60,78,54,195,282,297,102,138,24,159,186,9,258,126,96,102,21,30,102,207,288,45,252,288,72,246,195,153,48,183,129,111,261,183,6,243,180,264},
{237,60,123,279,72,84,105,24,186,126,210,288,189,198,33,0,45,261,102,96,270,150,279,99,117,240,282,279,39,162,246,132,225,69,114,153,153,219,33,195,204,243,39,249,297,231,105,42,192,207,138,21,216,273,120,33,69,261,171,108},
{279,117,243,60,42,213,213,54,288,102,249,192,201,291,0,201,222,105,99,270,171,96,147,87,69,270,276,141,87,147,105,66,120,204,129,165,117,198,75,108,159,180,156,60,171,12,261,249,120,63,78,291,15,81,234,84,207,210,81,294},
{60,189,63,180,249,48,201,69,246,276,33,105,159,189,24,186,204,285,294,180,204,228,27,219,9,261,162,219,171,243,69,87,288,132,126,240,36,27,165,141,162,198,102,177,243,126,219,3,114,213,39,174,297,66,252,165,183,270,240,213}
};



int obstacles[DIM_Y][DIM_X]= {
{1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,1},
{0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},

{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},

{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},
{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},

{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},

{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},

{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1},
{1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
};


//int obstacles[DIM_Y][DIM_X]= {0};
