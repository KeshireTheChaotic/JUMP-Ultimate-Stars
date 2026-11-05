
void FUN_03801898(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_038014f4(param_1,param_2,0);
  for (iVar2 = *(int *)(param_1 + 0x3c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x50)) {
    iVar1 = FUN_037fffdc(iVar2);
    if (iVar1 != 0) {
      if (-1 < (int)param_3) {
        FUN_037ffff8(iVar2,param_3 & 0xff);
      }
      *(undefined1 *)(iVar2 + 0x22) = 1;
      FUN_037fffec(iVar2);
    }
  }
  return;
}

