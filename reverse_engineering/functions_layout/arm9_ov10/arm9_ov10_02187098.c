
undefined4 FUN_02187098(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int local_18;
  
  if (param_2[0xc] != 0) {
    return 0;
  }
  iVar1 = FUN_0200131c(param_2[0xe]);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_020012d8(param_2[0xe],0);
    iVar2 = FUN_02183728(param_1,param_2[2],iVar1,&local_18,0,&DAT_021a5e30);
    if ((local_18 != 0) || (iVar2 != 0)) break;
    if (*(int *)(iVar1 + 0xc) != *(int *)(iVar1 + 8)) {
      return 0;
    }
    FUN_02001150(param_2[0xe],0);
    iVar1 = FUN_0200131c(param_2[0xe]);
  }
  *param_2 = 0x6a;
  return 0;
}

