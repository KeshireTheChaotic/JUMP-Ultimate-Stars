
undefined4 FUN_02003bd8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  iVar1 = FUN_02005f20(&DAT_02093064,0xffffffff);
  if (-1 < iVar1) {
    return 0xffffffff;
  }
  iVar1 = FUN_02053da4(&DAT_020a0880);
  if (iVar1 == 0) {
    DAT_020a07fc = *(int *)(DAT_020aab78 + 0x6c);
    DAT_020a0820 = 1;
  }
  else if (DAT_020a07fc == *(int *)(DAT_020aab78 + 0x6c)) {
    DAT_020a0820 = DAT_020a0820 + 1;
  }
  else {
    FUN_02053ed0(&DAT_020a0880);
    DAT_020a07fc = *(int *)(DAT_020aab78 + 0x6c);
    DAT_020a0820 = 1;
  }
  uVar2 = FUN_020035b4(0x2003b95,&DAT_02093064,param_1,&uStack_c);
  DAT_020a0820 = DAT_020a0820 + -1;
  if (DAT_020a0820 == 0) {
    FUN_02053e60(&DAT_020a0880);
  }
  return uVar2;
}

