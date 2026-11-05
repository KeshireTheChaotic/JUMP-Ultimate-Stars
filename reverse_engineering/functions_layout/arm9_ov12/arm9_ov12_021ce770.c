
void FUN_021ce770(int param_1,short *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      uVar1 = ~(uint)*(byte *)(param_1 + uVar2);
      sVar3 = (short)((uVar1 & 0xf) * 8 + 0x84 << ((int)(uVar1 & 0x70) >> 4));
      if ((uVar1 & 0x80) == 0) {
        sVar3 = sVar3 + -0x84;
      }
      else {
        sVar3 = 0x84 - sVar3;
      }
      *param_2 = sVar3;
      param_2 = param_2 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_3);
  }
  return;
}

