
void FUN_020149c8(int param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int unaff_r4;
  undefined4 uVar7;
  undefined4 uVar8;
  
  bVar2 = *(byte *)(param_1 + 0x10);
  if (((char)bVar2 < '\0') && (((bVar2 & 3) >> 1 != 0 || ((bVar2 & 0xf) >> 3 == 0)))) {
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  uVar6 = (uint)*(byte *)(param_1 + 0x10);
  if (((uVar6 & 0x3f) >> 5 == 0) || (((uVar6 & 7) >> 2 == 0 && ((uVar6 & 0x1f) >> 4 != 0)))) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
  iVar4 = *(int *)(param_1 + 0x38);
  if (iVar4 != 0) {
    unaff_r4 = *(int *)(iVar4 + 0x48);
  }
  if (iVar4 == 0 || unaff_r4 == 0) {
    return;
  }
  uVar5 = (uint)*(byte *)(*(int *)(unaff_r4 + 100) + 0x10);
  uVar3 = uVar5 & 0xf;
  uVar6 = uVar3 >> 3;
  uVar5 = uVar5 & 0x1f;
  uVar1 = uVar5 >> 4;
  if (uVar6 == 0 && uVar1 == 0) {
    return;
  }
  if (uVar6 != 0) {
    FUN_02014c34(*(undefined4 *)(unaff_r4 + 100),uVar7);
  }
  if (uVar1 != 0) {
    FUN_02014c64(*(undefined4 *)(unaff_r4 + 100),uVar8);
  }
  for (iVar4 = *(int *)(unaff_r4 + 0x4c); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x4c)) {
    if ((uVar3 & *(byte *)(*(int *)(iVar4 + 100) + 0x10) & 0xf) >> 3 != 0) {
      FUN_02014c34(*(int *)(iVar4 + 100),uVar7);
    }
    if ((uVar5 & *(byte *)(*(int *)(iVar4 + 100) + 0x10) & 0x1f) >> 4 != 0) {
      FUN_02014c64(*(int *)(iVar4 + 100),uVar8);
    }
  }
  return;
}

