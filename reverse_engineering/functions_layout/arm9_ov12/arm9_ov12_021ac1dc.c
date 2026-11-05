
void FUN_021ac1dc(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  
  uStack_14 = param_4;
  FUN_0200f69c(auStack_18,1);
  iVar1 = param_1[1];
  param_1[1] = iVar1 - param_2;
  iVar1 = iVar1 * 0x24 + *param_1;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_021ac3c4(iVar1 + -0x1c);
    iVar1 = iVar1 + -0x24;
  }
  return;
}

