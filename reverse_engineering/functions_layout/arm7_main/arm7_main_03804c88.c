
void FUN_03804c88(uint *param_1,int param_2)

{
  if ((*param_1 & 0x1ffffff) >> 0x18 == 0) {
    DAT_0380a990 = 0;
    DAT_0380a98c = 0;
  }
  else if ((*param_1 & 0x7ffffff) >> 0x19 == 0) {
    DAT_0380a990 = 0;
    if (param_2 < DAT_0380a9b8 >> 1) {
      DAT_0380a98c = DAT_0380a98c + 1;
      if ((3 < DAT_0380a98c) && (DAT_0380a98c = 0, DAT_0380a9bc < DAT_0380a9b8)) {
        DAT_0380a9b8 = DAT_0380a9b8 + -1;
        DAT_0380a990 = 3;
      }
    }
    else {
      DAT_0380a98c = 0;
    }
  }
  else {
    DAT_0380a98c = 0;
    DAT_0380a990 = DAT_0380a990 + 1;
    if ((3 < DAT_0380a990) && (DAT_0380a990 = 0, DAT_0380a9b8 < 0x23)) {
      DAT_0380a9b8 = DAT_0380a9b8 + 1;
    }
  }
  return;
}

