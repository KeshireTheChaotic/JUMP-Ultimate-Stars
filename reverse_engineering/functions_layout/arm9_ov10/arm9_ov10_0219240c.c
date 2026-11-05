
uint FUN_0219240c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint local_1c [2];
  
  iVar8 = *(int *)(param_1 + 4);
  iVar4 = *(int *)(iVar8 + 100);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  uVar9 = *(uint *)(param_1 + 0x14);
  uVar6 = *(undefined4 *)(param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  iVar7 = *(int *)(iVar4 + 0xf8);
  while( true ) {
    iVar2 = FUN_0218f044(local_1c);
    if ((iVar2 == 0) || (0 < (int)(local_1c[0] - iVar7))) goto LAB_02192462;
    bVar3 = true;
    if ((*(char *)(iVar8 + 0x73) != '\0') && (*(char *)(iVar8 + 0x73) != '\x04')) {
      bVar3 = false;
    }
    if ((bVar3) && (*(char *)(iVar8 + 8) != '\x04')) break;
    FUN_02052ea0(10);
  }
  iVar2 = 0;
LAB_02192462:
  if (*(char *)(iVar8 + 0x73) == '\x04') {
    if (iVar2 == 0) {
      return 0;
    }
    if (local_1c[0] < uVar9) {
      uVar9 = local_1c[0];
    }
    FUN_02051890(iVar2,uVar5,uVar9);
    FUN_0218efb4(uVar9);
    return uVar9;
  }
  if (iVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_02192568(iVar8,uVar5,uVar9,uVar6,uVar1);
  }
  if ((int)uVar9 < 1) {
    return uVar9;
  }
  if ((int)(uint)*(ushort *)(iVar4 + 0xfc) <= *(int *)(iVar4 + 0xf8)) {
    FUN_02192388(iVar8);
  }
  return uVar9;
}

