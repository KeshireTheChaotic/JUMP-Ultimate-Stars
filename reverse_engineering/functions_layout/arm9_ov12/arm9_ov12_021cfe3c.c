
void FUN_021cfe3c(short *param_1,short *param_2,undefined2 *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  short *local_2c;
  short *local_28;
  undefined2 *local_24;
  
  uVar1 = 0;
  if (param_4 >> 1 != 0) {
    local_2c = param_2;
    local_28 = param_1;
    local_24 = param_3;
    do {
      iVar3 = (int)*local_28 + (int)*local_2c;
      if (iVar3 < 0x8000) {
        if (iVar3 < -0x8000) {
          iVar3 = -0x8000;
        }
      }
      else {
        iVar3 = 0x7fff;
      }
      *local_24 = (short)iVar3;
      iVar3 = uVar1 + 1;
      iVar2 = (int)param_1[iVar3] + (int)param_2[iVar3];
      if (iVar2 < 0x8000) {
        if (iVar2 < -0x8000) {
          iVar2 = -0x8000;
        }
      }
      else {
        iVar2 = 0x7fff;
      }
      param_3[iVar3] = (short)iVar2;
      iVar3 = uVar1 + 2;
      iVar2 = (int)param_1[iVar3] + (int)param_2[iVar3];
      if (iVar2 < 0x8000) {
        if (iVar2 < -0x8000) {
          iVar2 = -0x8000;
        }
      }
      else {
        iVar2 = 0x7fff;
      }
      param_3[iVar3] = (short)iVar2;
      iVar3 = uVar1 + 3;
      iVar2 = (int)param_1[iVar3] + (int)param_2[iVar3];
      if (iVar2 < 0x8000) {
        if (iVar2 < -0x8000) {
          iVar2 = -0x8000;
        }
      }
      else {
        iVar2 = 0x7fff;
      }
      param_3[iVar3] = (short)iVar2;
      local_2c = local_2c + 4;
      local_28 = local_28 + 4;
      local_24 = local_24 + 4;
      uVar1 = uVar1 + 4;
    } while (uVar1 < param_4 >> 1);
  }
  return;
}

