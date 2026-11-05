
void FUN_02086264(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x30);
  iVar1 = FUN_020862e8();
  if (iVar1 != 0) {
    FUN_02086300(param_1,0x80);
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x5c);
  if (*(int *)(iVar3 + 0x10) < *(int *)(iVar1 + 0x10)) {
    FUN_02086300(param_1,0xffffff80);
    return;
  }
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar1 + 0x10);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
  uVar2 = *(undefined4 *)(iVar3 + 0x10);
  *(undefined4 *)(iVar1 + 0x10) = uVar2;
  FUN_02085a04(param_1,0,0,uVar2,param_4);
  return;
}

