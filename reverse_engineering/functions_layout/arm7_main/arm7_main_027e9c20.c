
void FUN_027e9c20(int param_1,ushort *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = FUN_027e93b0(param_1 + 1);
  puVar4 = param_2 + 1;
  for (uVar5 = 0; uVar5 < uVar1; uVar5 = uVar5 + 1) {
    uVar2 = FUN_027e93b0(param_1 + 2 + uVar5);
    uVar3 = (uVar2 & 0x7f) - 1;
    if ((uVar3 < 0x78) && (uVar3 = (uint)*(ushort *)(&DAT_027f7e18 + uVar3 * 2), uVar3 != 0xff)) {
      *puVar4 = *puVar4 | (ushort)(1 << (uVar3 & 0xff));
      if ((uVar2 & 0x80) != 0) {
        *param_2 = *param_2 | (ushort)(1 << (uVar3 & 0xff));
      }
    }
    else {
      *puVar4 = *puVar4 | 0x8000;
      if ((uVar2 & 0x80) != 0) {
        *param_2 = *param_2 | 0x8000;
      }
    }
  }
  return;
}

