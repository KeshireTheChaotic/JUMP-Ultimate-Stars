
void FUN_0214cee0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  uVar1 = 0;
  *(undefined4 *)(iVar2 + 0x8e8) = param_2;
  *(undefined4 *)(iVar2 + 0x8ec) = 0;
  *(int *)(iVar2 + 0x8f4) = param_3;
  if (param_3 != 0) {
    uVar1 = 2;
  }
  *(undefined4 *)(iVar2 + 0x8f0) = uVar1;
  *(undefined1 *)(iVar2 + 0x902) = 1;
  return;
}

