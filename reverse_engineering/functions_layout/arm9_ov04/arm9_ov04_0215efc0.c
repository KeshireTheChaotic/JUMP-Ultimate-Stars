
void FUN_0215efc0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char local_28 [4];
  undefined4 uStack_24;
  
  uStack_24 = param_4;
  iVar7 = 0;
  for (iVar3 = 0; iVar3 < *(char *)(param_1 + 0x10); iVar3 = iVar3 + 1) {
    *(undefined1 *)(param_1 + iVar3 * 4 + 1) = 0xff;
    if (param_2 == *(char *)(param_1 + iVar3 * 4)) {
      local_28[iVar7] = (char)iVar3;
      iVar7 = (iVar7 + 1) * 0x1000000 >> 0x18;
    }
  }
  iVar3 = 0;
  for (iVar8 = iVar7; 0 < iVar8; iVar8 = (iVar8 - iVar5) * 0x1000000 >> 0x18) {
    uVar2 = 0xffff;
    for (iVar5 = 0; iVar5 < iVar7; iVar5 = iVar5 + 1) {
      if (((-1 < local_28[iVar5]) &&
          (iVar4 = param_1 + local_28[iVar5] * 4, *(char *)(iVar4 + 1) < '\0')) &&
         (uVar1 = *(ushort *)(iVar4 + 2), uVar1 < uVar2)) {
        uVar2 = uVar1;
      }
    }
    iVar5 = 0;
    for (iVar4 = 0; iVar4 < iVar7; iVar4 = iVar4 + 1) {
      if (((-1 < local_28[iVar4]) &&
          (iVar6 = param_1 + local_28[iVar4] * 4, *(char *)(iVar6 + 1) < '\0')) &&
         (uVar2 == *(ushort *)(iVar6 + 2))) {
        *(char *)(iVar6 + 1) = (char)iVar3;
        iVar5 = iVar5 + 1;
      }
    }
    iVar3 = (iVar3 + iVar5) * 0x1000000 >> 0x18;
  }
  return;
}

