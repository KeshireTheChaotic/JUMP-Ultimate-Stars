
void FUN_0215c0d0(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int local_18;
  int local_14;
  
  iVar5 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(char *)(iVar5 + 0x4ef) == '\0') {
    *(char *)(iVar5 + 0x4d3) = *(char *)(iVar5 + 0x4d3) + -1;
    if (*(char *)(iVar5 + 0x4d3) < '\0') {
      FUN_0215c260(iVar5,1,*(undefined4 *)(**(int **)(iVar5 + 0x1e8) + 0x34),
                   *(undefined1 *)(iVar5 + 0x4d2));
      iVar3 = *(int *)(iVar5 + 0x28);
      bVar1 = *(byte *)(iVar3 + 0xe);
      bVar2 = *(byte *)(iVar3 + 0x47);
      uVar4 = ((int)(bVar1 & 0xf0) >> 4) + (uint)*(byte *)(iVar3 + 0x48);
      if (uVar4 < 2) {
        iVar3 = (uVar4 + 1) * 0x30 + 0xc;
        FUN_02023894(*(undefined4 *)(*(int *)(iVar5 + 0x1a0) + 4),0x82002e,0);
      }
      else {
        iVar3 = (uVar4 - 1) * 0x30 + -4;
        FUN_02023894(*(undefined4 *)(*(int *)(iVar5 + 0x1a0) + 4),0x82002d,0);
      }
      local_18 = iVar3 << 0xc;
      FUN_02150070(*(undefined4 *)(iVar5 + 0x48),&local_18);
      local_14 = (((bVar1 & 0xf) + (uint)bVar2) * 0x30 + 0x18) * 0x1000;
      FUN_02150a10(*(undefined4 *)(iVar5 + 0x1a0),&local_14);
      FUN_02028384(*(undefined4 *)(*(int *)(iVar5 + 0x30) + 4),FUN_0215c20c);
      FUN_0215bd18(iVar5,0);
      func_0x021b65cc();
    }
    (**(code **)(iVar5 + 0x4b4))(iVar5);
    FUN_02073840();
  }
  return;
}

