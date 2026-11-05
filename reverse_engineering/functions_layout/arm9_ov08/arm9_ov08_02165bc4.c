
void FUN_02165bc4(int param_1,int param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  puVar1 = *(uint **)(param_1 + 8);
  if (-1 < param_2) {
    puVar1[param_2 * 2] =
         (param_3 & 0x1ff) << 0x10 | puVar1[param_2 * 2] & 0xfe00ff00 | param_4 & 0xff;
    return;
  }
  uVar2 = *puVar1;
  uVar3 = *puVar1;
  *puVar1 = (param_3 & 0x1ff) << 0x10 | *puVar1 & 0xfe00ff00 | param_4 & 0xff;
  iVar4 = 1;
  if (1 < *(byte *)(param_1 + 0xc)) {
    do {
      puVar1 = puVar1 + 2;
      *puVar1 = (((*puVar1 & 0x1ff0000) >> 0x10) + (param_3 - ((uVar2 & 0x1ff0000) >> 0x10)) & 0x1ff
                ) << 0x10 |
                *puVar1 & 0xfe00ff00 | (*puVar1 & 0xff) + (param_4 - (uVar3 & 0xff)) & 0xff;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)*(byte *)(param_1 + 0xc));
  }
  return;
}

