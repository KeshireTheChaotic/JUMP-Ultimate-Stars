
uint FUN_02005e98(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int aiStack_24 [3];
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  
  aiStack_24[1] = 0;
  aiStack_24[0] = param_1;
  uStack_10 = param_4;
  uVar1 = FUN_02005960(param_3,0x7fffffff,0x20049b9,aiStack_24,&iStack_14,&iStack_18,aiStack_24 + 2)
  ;
  if (param_2 != (int *)0x0) {
    *param_2 = param_1 + iStack_14;
  }
  if (((aiStack_24[2] == 0) && ((iStack_18 != 0 || (uVar1 < 0x80000000)))) &&
     ((iStack_18 == 0 || (uVar1 < 0x80000001)))) {
    if (iStack_18 != 0) {
      uVar1 = -uVar1;
    }
    return uVar1;
  }
  if (iStack_18 == 0) {
    uVar1 = 0x7fffffff;
  }
  else {
    uVar1 = 0x80000000;
  }
  DAT_020a0c10 = 0x22;
  return uVar1;
}

