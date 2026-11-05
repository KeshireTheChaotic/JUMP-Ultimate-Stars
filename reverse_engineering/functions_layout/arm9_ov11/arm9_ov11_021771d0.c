
void FUN_021771d0(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar3 = (int *)*DAT_02183a38;
  while (piVar3 != (int *)0x0) {
    iVar5 = *piVar3;
    iVar2 = FUN_02083aec((int)*(short *)(piVar3 + 7));
    if (iVar2 == 0) {
      piVar3[2] = piVar3[2] & 0xfffffffe;
      FUN_02037c24(DAT_02183a38,piVar3);
      FUN_02037b98(DAT_02183a38 + 4,piVar3);
    }
    if (((*(char *)((int)piVar3 + 0x1e) == '\x02') && ((piVar3[2] & 8U) == 0)) &&
       (iVar2 = FUN_02083b2c((int)*(short *)(piVar3 + 7)), iVar2 != 0)) {
      piVar3[2] = piVar3[2] & 0xfff00000U | piVar3[2] & 0xfffffU | 8;
    }
    piVar3 = (int *)iVar5;
  }
  piVar3 = (int *)DAT_02183a38[4];
  while (piVar3 != (int *)0x0) {
    iVar5 = *piVar3;
    iVar2 = FUN_02083aec((int)*(short *)(piVar3 + 7));
    if (iVar2 != 0) {
      piVar3[2] = piVar3[2] & 0xfff00000U | piVar3[2] & 0xfffffU | 1;
      FUN_02037c24(DAT_02183a38 + 4,piVar3);
      FUN_02037b98(DAT_02183a38,piVar3);
    }
    if (((*(char *)((int)piVar3 + 0x1e) == '\x02') && ((piVar3[2] & 8U) == 0)) &&
       (iVar2 = FUN_02083b2c((int)*(short *)(piVar3 + 7)), iVar2 != 0)) {
      piVar3[2] = piVar3[2] & 0xfff00000U | piVar3[2] & 0xfffffU | 8;
    }
    piVar3 = (int *)iVar5;
  }
  for (puVar4 = (undefined4 *)*DAT_02183a38; puVar4 != (undefined4 *)0x0;
      puVar4 = (undefined4 *)*puVar4) {
    uVar1 = (puVar4[2] & 0x3ffffff) >> 0x14;
    if ((uVar1 != 0x3f) && ((DAT_02183a38[uVar1 * 8 + 0x11] & 8U) != 0)) {
      puVar4[2] = puVar4[2] & 0xfffffffd;
    }
    uVar1 = (uint)puVar4[2] >> 0x1a;
    if ((uVar1 != 0x3f) && ((DAT_02183a38[uVar1 * 8 + 0x11] & 8U) != 0)) {
      puVar4[2] = puVar4[2] & 0xfffffffb;
    }
    if (*(char *)((int)puVar4 + 0x1e) == '\f') {
      FUN_02083760((int)*(short *)(puVar4 + 7),puVar4 + 3);
    }
  }
  return;
}

