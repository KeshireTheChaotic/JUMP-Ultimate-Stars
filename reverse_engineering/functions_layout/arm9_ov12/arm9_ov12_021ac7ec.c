
int * FUN_021ac7ec(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  
  if (*param_1 != 0) {
    iVar2 = param_1[1];
    uStack_14 = param_4;
    FUN_0200f69c(auStack_18,1);
    iVar1 = param_1[1];
    param_1[1] = iVar1 - iVar2;
    iVar1 = iVar1 * 0x24 + *param_1;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      FUN_021ac3c4(iVar1 + -0x1c);
      iVar1 = iVar1 + -0x24;
    }
    FUN_0201b244(*param_1);
  }
  return param_1;
}

