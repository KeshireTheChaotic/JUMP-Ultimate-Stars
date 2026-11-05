
int FUN_02005f20(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_1 == 0) || (uVar2 = *(uint *)(param_1 + 4), (uVar2 & 0x3ff) >> 7 == 0)) {
    return 0;
  }
  uVar1 = (uVar2 & 0xfff) >> 10;
  if (uVar1 == 0) {
    if (param_2 < 1) {
      if (param_2 < 0) {
        *(uint *)(param_1 + 4) = uVar2 & 0xfffff3ff | 0x400;
      }
    }
    else {
      *(uint *)(param_1 + 4) = uVar2 & 0xfffff3ff | 0x800;
    }
  }
  else if (uVar1 == 1) {
    param_2 = -1;
  }
  else if (uVar1 == 2) {
    param_2 = 1;
  }
  return param_2;
}

