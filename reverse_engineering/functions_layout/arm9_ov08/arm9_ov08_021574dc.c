
int * FUN_021574dc(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_10 [4];
  
  piVar1 = (int *)FUN_0216609c(*(undefined4 *)(DAT_0216e710 + 0x60));
  iVar2 = FUN_021658c4(param_1,auStack_10,4);
  piVar1[2] = iVar2;
  iVar2 = piVar1[2];
  *piVar1 = iVar2 + 0x30;
  piVar1[1] = iVar2 + *(int *)(iVar2 + 0x24) + 0x28;
  return piVar1;
}

