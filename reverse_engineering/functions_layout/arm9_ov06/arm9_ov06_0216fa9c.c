
void FUN_0216fa9c(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  puVar1 = (undefined4 *)FUN_0216faf4(param_2);
  iVar3 = *(int *)(param_1 + 0x2c);
  uVar5 = *puVar1;
  iVar4 = puVar1[1];
  iVar2 = *(int *)(*(int *)(iVar3 + 0x10) + 0x5c);
  *(undefined4 *)(iVar2 + 0xc) = uVar5;
  *(int *)(iVar2 + 0x10) = iVar4 + -0x2600;
  iVar2 = *(int *)(*(int *)(iVar3 + 0x10) + 0x5c);
  *(undefined4 *)(iVar2 + 0x14) = uVar5;
  *(int *)(iVar2 + 0x18) = iVar4 + -0x2600;
  return;
}

