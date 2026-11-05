
void FUN_021a2eb0(int param_1,uint param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_02199e10();
  uVar1 = FUN_0217668c();
  *(undefined1 *)(param_1 + 0x34) = uVar1;
  FUN_02051890(uRam021a2ef4,iVar2,8);
  *(uint *)(iVar2 + 4) = param_2 & uRam021a2ef8;
  FUN_021a2f1c(param_1);
  return;
}

