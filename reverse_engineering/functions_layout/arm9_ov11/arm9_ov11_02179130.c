
bool FUN_02179130(int param_1,int param_2)

{
  bool bVar1;
  
  if (param_2 < 0x1c) {
    return false;
  }
  if (*(short *)(param_1 + (param_2 + -0x1b) * 2 + 0x3c) != 0) {
    return false;
  }
  if (*(byte *)(param_1 + param_2) < 8) {
    if (*(uint *)(&DAT_0218190c + (uint)*(byte *)(param_1 + param_2) * 4) <
        (*(uint *)(param_1 + 0x38) & 0xff)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    *(undefined2 *)(param_1 + (param_2 + -0x1b) * 2 + 0x3c) = 0x1e;
  }
  return bVar1;
}

