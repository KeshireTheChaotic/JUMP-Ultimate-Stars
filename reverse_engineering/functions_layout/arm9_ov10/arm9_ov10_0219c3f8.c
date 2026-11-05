
void FUN_0219c3f8(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  char local_18 [12];
  undefined4 uStack_c;
  
  uStack_c = param_4;
  FUN_0219c380(param_1,param_2,local_18);
  iVar1 = 0;
  do {
    *(char *)(param_3 + iVar1) = local_18[iVar1] + '0';
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xc);
  *(undefined1 *)(param_3 + iVar1) = 0;
  return;
}

