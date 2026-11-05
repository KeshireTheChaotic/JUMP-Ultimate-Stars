
void FUN_021731f0(int param_1,int param_2)

{
  int iVar1;
  
  *(char *)(param_1 + 0x108) = (char)param_2;
  iVar1 = FUN_0217325c(*(undefined4 *)(param_1 + 0x24));
  if (iVar1 != 0) {
    if (param_2 == 1) {
      FUN_02173144(*(undefined4 *)(param_1 + 0x24),1);
      FUN_02173270(iVar1,1);
    }
    else {
      FUN_02173144(*(undefined4 *)(param_1 + 0x24),0);
      FUN_02173270(iVar1,0);
      FUN_02176d14(iVar1);
    }
  }
  *(undefined4 *)(param_1 + 0xd8) = 0;
  return;
}

