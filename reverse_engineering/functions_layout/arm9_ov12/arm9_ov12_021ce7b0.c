
void FUN_021ce7b0(int param_1,short *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (param_3 != 0) {
    do {
      iVar5 = (int)*param_2 >> 2;
      if (iVar5 < 0) {
        iVar5 = -iVar5;
        bVar1 = 0x7f;
      }
      else {
        bVar1 = 0xff;
      }
      if (0x1fdf < iVar5) {
        iVar5 = 0x1fdf;
      }
      piVar3 = &DAT_021d50bc;
      iVar4 = 0;
      do {
        iVar2 = *piVar3;
        piVar3 = piVar3 + 1;
        if (iVar5 + 0x21 <= iVar2) goto LAB_021ce7f8;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 8);
      iVar4 = 8;
LAB_021ce7f8:
      if (iVar4 < 8) {
        bVar1 = ((byte)(iVar4 << 4) | (byte)(iVar5 + 0x21 >> (iVar4 + 1U & 0xff)) & 0xf) ^ bVar1;
      }
      else {
        bVar1 = bVar1 ^ 0x7f;
      }
      *(byte *)(param_1 + uVar6) = bVar1;
      param_2 = param_2 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 < param_3);
  }
  return;
}

