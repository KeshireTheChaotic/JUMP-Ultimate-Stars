
void FUN_0214ff30(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if ((*(char *)(iVar3 + 0xac) == '\0') || (*(int *)(*(int *)(param_1 + 4) + 0x124) != 0xc)) {
    FUN_0207342c(0x78,0);
    uVar1 = FUN_0214dd50();
    uVar2 = FUN_0214fa20(*(undefined4 *)(*(int *)(param_1 + 4) + 0x124));
    FUN_0214dd80(uVar1,uVar2);
    uVar1 = FUN_0214dd50();
    FUN_0214dd60(uVar1,0xb);
    FUN_0214f7dc(iVar3,0);
    return;
  }
  FUN_0207342c(0x78,2);
  return;
}

