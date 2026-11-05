
undefined4 FUN_02076ce0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_3 * 0x14 + param_1 + param_2 * 4 + 8);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x34);
  }
  return uVar2;
}

