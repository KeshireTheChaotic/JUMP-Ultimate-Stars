
void FUN_03801f68(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (; (iVar2 < 0x10 && (param_2 != 0)); param_2 = param_2 >> 1) {
    if (((param_2 & 1) != 0) &&
       (iVar1 = FUN_03801770(&DAT_03808fe8 + param_1 * 0x24,iVar2), iVar1 != 0)) {
      FUN_03800750(iVar1,&DAT_03808fe8 + param_1 * 0x24,param_3);
    }
    iVar2 = iVar2 + 1;
  }
  return;
}

